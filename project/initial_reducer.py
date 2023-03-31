#!/usr/bin/env python3

"""
In this example diopter is used to generate and reduce a csmith
that results in larger text with -Os than -O3
"""

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



def get_size(program: SourceProgram, setting: CompilationSetting) -> int:
    return setting.compile_program(
        program, ObjectCompilationOutput(None)
    ).output.text_size()

def get_ratio(program: SourceProgram, setting: CompilationSetting) -> float:
    codeLength = len(program.code)
    binaryLength = setting.compile_program(
        program, ObjectCompilationOutput(None)
        ).output.text_size()
    
    ratio = binaryLength/codeLength

    return ratio


def ratio_filter(program: SourceProgram, Osettings: CompilationSetting, best_ratio: float) -> bool:
    ratio = get_ratio(program,Osettings)
    return ratio>best_ratio

def filter(
    program: SourceProgram, O3: CompilationSetting, Os: CompilationSetting
) -> bool:
    O3_size = get_size(program, O3)
    Os_size = get_size(program, Os)
    return O3_size < Os_size


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
        if not self.san.sanitize(program):
            return False
        
        # Check if the ratio has increased!
        if ratio_filter(program, self.O3, self.bestRatio):
            self.bestRatio = get_ratio(program, self.O3)
            return True
        return False

if __name__ == "__main__":
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
    sanitizer = Sanitizer()
    while True:
        p = CSmithGenerator(sanitizer,include_path="/home/chris/.bin/csmith/build/include").generate_program()
        #p = Os.preprocess_program(p, make_compiler_agnostic=False)
        if filter(p, O3, Os):
            break
    print(f"initial ratio: {get_ratio(p, O3)}")
    #print(p.code)    
    rprogram = Reducer().reduce(p, ReduceObjectSize(sanitizer, O3, Os))  # , debug=True)
    assert rprogram

    print(rprogram.code)
    print(f"Ratio obtained: {get_ratio(rprogram, O3)}")
