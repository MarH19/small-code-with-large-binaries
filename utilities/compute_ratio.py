from argparse import ArgumentParser
from diopter.compiler import Language
from diopter.compiler import (
    CompilationSetting,
    SourceProgram,
    CompilerExe,
    ObjectCompilationOutput,
    OptLevel
)
import os

Os = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.Os,
    flags=("-march=native",),
)


parser = ArgumentParser()
parser.add_argument("-f", "--file", dest="filename",
                    help="FILE from which to read", metavar="FILE")

args = parser.parse_args()

print(args.filename)

with open(args.filename, "r") as f:
    code = ""
    for line in f.readlines():
        code+=line

    program = SourceProgram(
            code=code,
            language=Language.C,
            defined_macros=(),
            include_paths=(),
            system_include_paths=os.environ['CSMITH_H_PATH'],
            flags=(),
    )    

    assert False # This might not even need to be fixed. Since it never gets used, but fix the include path below before removing the assert =/
    bianryLength = Os.compile_program(
        program, 
        ObjectCompilationOutput(None),
        additional_flags=["-I" "/home/chris/.bin/csmith/build/include/"]).output.text_size()
    
    print(bianryLength/len(program.code))
    


