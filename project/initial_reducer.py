#!/usr/bin/env python3

"""
This diopter program is used to generate and reduce a csmith
that results in a disproportionate ratio between binary and source code
"""

import tempfile
import helper
import ast_parser
import subprocess
from diopter.compiler import (
    CompilationSetting,
    CompilerExe,
    ObjectCompilationOutput,
    OptLevel,
    SourceProgram,
)
from diopter.generator import CSmithGenerator
from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer
from diopter.compiler import Language

import sys
from subprocess import call
import re


# This is used to devalue the trivial solution
def get_empty_assembly_size(setting: CompilationSetting) -> int:
    empty = '#include "csmith.h"\n int main(){}'
    program = SourceProgram(
            code=empty,
            language=Language.C,
            defined_macros=(),
            include_paths=(),
            system_include_paths=("/home/chris/.bin/csmith/build/include"),
            flags=(),
        )

    bianryLength = setting.compile_program(
        program, 
        ObjectCompilationOutput(None),
        additional_flags=["-I" "/home/chris/.bin/csmith/build/include/"]).output.text_size()

    return bianryLength



def get_size(program: SourceProgram, setting: CompilationSetting) -> int:
    return setting.compile_program(
        program, ObjectCompilationOutput(None)
    ).output.text_size()

def get_ratio(program: SourceProgram, setting: CompilationSetting) -> float:
    codeLength = len(program.code)
    binaryLength = setting.compile_program(
        program, ObjectCompilationOutput(None)
        ).output.text_size()
    
    ratio = (binaryLength-get_empty_assembly_size(setting))/codeLength

    return ratio


# clang -Xclang -ast-dump -fsyntax-only outputs/with_synatx/output_5.c

def ratio_filter(program: SourceProgram, Osettings: CompilationSetting, best_ratio: float) -> bool:
    ratio = get_ratio(program,Osettings)

    #0. remove comments from code
    code = helper.comment_remover(program.code)

    #1. clang-format code
    # proc = subprocess.Popen(
    #     ["clang-format"],
    #     stdin=subprocess.PIPE,
    #     stdout=subprocess.PIPE,
    #     stderr=subprocess.PIPE,
    #     universal_newlines=True,
    # )
    # stdout, stderr = proc.communicate(input=code)
    # output = stdout
    print("---")
    ast_code_size = ast_parser.get_code_size(code)
    print(ast_code_size)
    print("---")
    #OPTION 1, try to use a tool to count the logical lines of code/tokens in c code TODO find such a tools
    # with tempfile.NamedTemporaryFile(mode="w", suffix=".c", delete=True) as f:
    #     f.write(code)

    #     cmd_str = "ctags -x "+f.name+" | awk '{print $2}' | sort | wc -l"
        
    #     out = subprocess.run(cmd_str, shell=True, stdout=subprocess.PIPE)
        
    #     print(int(bytes.decode(out.stdout))>10) #ensure that there are more than 10 variable definitions/functions
        

    # OPTION 2, try to remove tricks by hand
    #2. Remove "padding lines" which only contain ; { } ( )
    # output = [s for s in output.splitlines() if not (s.replace(";","")).isspace()] # Remove lines containing only spaces or only ;


    return ratio>best_ratio and ast_code_size >30 #int(bytes.decode(out.stdout))>10 #and len(output) > 15


class ReduceObjectSize(ReductionCallback):
    def __init__(
        self,
        san: Sanitizer,
        O3: CompilationSetting,
        Os: CompilationSetting,
    ):
        self.san = san
        self.O3 = O3
        self.Os = Os
        self.bestRatio = 0

    def test(self, program: SourceProgram) -> bool:
        if not (res := self.san.sanitize(program)):
            print(f" {res} Sani fail")
            return False
        
        # Check if the ratio has increased!
        if ratio_filter(program, self.O3, self.bestRatio):
            self.bestRatio = get_ratio(program, self.O3)
            return True
        return False

if __name__ == "__main__":
    for i in range(1):  #TODO define a better way to run multiple intresting
        O3 = CompilationSetting(
            compiler=CompilerExe.get_system_gcc(),
            opt_level=OptLevel.O3,
            flags=("-march=native",),
        )
        Os = CompilationSetting(
            compiler=CompilerExe.get_system_gcc(),
            opt_level=OptLevel.Os,
            flags=("-march=native",),
        )
        sanOs = CompilationSetting(
            compiler=CompilerExe.get_system_clang(),
            opt_level=OptLevel.Os,
            flags=("-march=native",),
        )
        sanitizer = Sanitizer(debug=True)
        while True:
            p = CSmithGenerator(sanitizer,include_path="/home/chris/.bin/csmith/build/include").generate_program()
            p = sanOs.preprocess_program(p, make_compiler_agnostic=True)
            sanitizer.sanitize(p)
            if ratio_filter(p, O3, 0):
                break
        print(f"initial ratio: {get_ratio(p, O3)}")
        t = ReduceObjectSize(sanitizer, O3, Os)
        # import pdb; pdb.set_trace()
        rprogram = Reducer().reduce(p, ReduceObjectSize(sanitizer, O3, Os))  # , debug=True)
        assert rprogram

        #TODO ensure that output is clang-formatted for better readability
        with open("output_"+str(i)+".c", "a") as f:
            print(rprogram.code, file = f)
        print(f"Ratio obtained: {get_ratio(rprogram, O3)}")
