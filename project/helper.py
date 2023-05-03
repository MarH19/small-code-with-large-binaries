import re
import subprocess
from diopter.generator import CSmithGenerator
from random import randint

from diopter.compiler import (
    CompilationSetting,
    ObjectCompilationOutput,
    SourceProgram,
)
from diopter.generator import CSmithGenerator
from diopter.compiler import Language



# Source Stack-overflow: https://stackoverflow.com/questions/241327/remove-c-and-c-comments-using-python
def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

def clang_formatter(code: str):
    proc = subprocess.Popen(
        ["clang-format"],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        universal_newlines=True,
    )
    stdout, stderr = proc.communicate(input=code)
    output = stdout

    return output

def generate_csmith_flags():
    options = CSmithGenerator.default_options_pool
    options_pool=[]
    for option in options:
            if randint(0, 1):
                options_pool.append(option)

    return options_pool


# ========================================
#  Options used to calculate sizes 
#       - of assembly code, compute ratios 
#       - of ratio
#

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


def get_ratio(program: SourceProgram, setting: CompilationSetting) -> float:
    codeLength = len(program.code)
    binaryLength = setting.compile_program(
        program, ObjectCompilationOutput(None)
        ).output.text_size()
    
    ratio = (binaryLength-get_empty_assembly_size(setting))/codeLength

    return ratio