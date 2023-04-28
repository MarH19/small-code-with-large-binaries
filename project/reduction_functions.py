from diopter.reducer import Reducer, ReductionCallback
from diopter.sanitizer import Sanitizer
from diopter.compiler import(
    CompilationSetting,
    SourceProgram
)
import helper, ast_parser



def ratio_filter(program: SourceProgram, Osettings: CompilationSetting, best_ratio: float) -> bool:
    ratio = helper.get_ratio(program,Osettings)

    #0. remove comments from code
    code = helper.comment_remover(program.code)

    print("---")
    ast_code_size = ast_parser.get_code_size(code)
    print(ast_code_size)
    print("---")

    return ratio>best_ratio and ast_code_size >30 


class ReduceObjectSize(ReductionCallback):
    def __init__(
        self,
        san: Sanitizer,
        Os: CompilationSetting,
    ):
        self.san = san
        self.Os = Os
        self.bestRatio = 0

    def test(self, program: SourceProgram) -> bool:
        if not (res := self.san.sanitize(program)):
            print(f" {res} Sani fail")
            return False
        
        # Check if the ratio has increased!
        if ratio_filter(program, self.Os, self.bestRatio):
            self.bestRatio = helper.get_ratio(program, self.Os)
            return True
        return False