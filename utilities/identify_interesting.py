"""
We take all generated runs contained in the outputs folder and we check if the obtained ratio is:
-   different between gcc and clang
-   Os performs worse (space-wise) optimization compared to O3

"""
import os
from diopter.compiler import (
    CompilerExe,
    OptLevel,
    CompilationSetting,
    SourceProgram,
    Language,
    ObjectCompilationOutput
)

O0 = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
)
Os = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.Os,
        flags=("-march=native",),
)
O3 = CompilationSetting(
        compiler=CompilerExe.get_system_gcc(),
        opt_level=OptLevel.O3,
        flags=("-march=native",),
)
Os_clang = CompilationSetting(
        compiler=CompilerExe.get_system_clang(),
        opt_level=OptLevel.O0,
        flags=("-march=native",),
)
def get_binary_length(source_code:str, compilation_setting: CompilationSetting):
    program = SourceProgram(
            code=source_code,
            language=Language.C,
            defined_macros=(),
            include_paths=(),
            system_include_paths=(os.environ['CSMITH_H_PATH']),
            flags=(),
        )
    binaryLength = compilation_setting.compile_program(program, ObjectCompilationOutput(None)).output.text_size()
    return binaryLength

for root, dirs, files in os.walk("outputs"):
        
        for file in files:
            if file.startswith("generated-") and file.endswith(".c"):
                with open(os.path.join(root, file), 'r') as f:
                    source_code = f.read()
                    if get_binary_length(source_code, Os) > get_binary_length(source_code, O0):
                        print(f"{os.path.join(root, file)} | Os is worse than O0")
                    if get_binary_length(source_code, Os) > get_binary_length(source_code, O3):
                        print(f"{os.path.join(root, file)} | Os is worse than O3")
                    
                    # if the difference between clang and gcc > 20% of the Os binary size we have a likely failed optimization
                    Os_difference = get_binary_length(source_code, Os) - get_binary_length(source_code, Os_clang)
                    if abs(Os_difference > get_binary_length(source_code, Os)*0.2):
                        if Os_difference > 0:
                            # In our case we only encounter this situation, since the reduciton process uses GCC as a metric to optimize against
                            print(f"{os.path.join(root, file)} |- GCC is worse than CLANG") 
                        else:   
                            print(f"{os.path.join(root, file)} |- CLANG is worse than GCC")
                         
                              


"""
outputs/test_run-2023-05-11_11-47-05/generated-3.c and generated-5.c
    Os worse O3
    Os worse than clang

static int main_i;
int main(void) {
  for (main_i; main_i < 7; main_i++) {
  }
}


"""
