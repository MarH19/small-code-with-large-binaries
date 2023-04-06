from argparse import ArgumentParser
from diopter.compiler import Language
from diopter.compiler import (
    CompilationSetting,
    SourceProgram,
    CompilerExe,
    ObjectCompilationOutput,
    OptLevel
)

O3 = CompilationSetting(
    compiler=CompilerExe.get_system_gcc(),
    opt_level=OptLevel.O3,
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
            system_include_paths=("/home/chris/.bin/csmith/build/include"),
            flags=(),
    )    

    bianryLength = O3.compile_program(
        program, 
        ObjectCompilationOutput(None),
        additional_flags=["-I" "/home/chris/.bin/csmith/build/include/"]).output.text_size()
    
    print(bianryLength/len(program.code))
    


