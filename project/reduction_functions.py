from diopter.reducer import ReductionCallback
from diopter.sanitizer import Sanitizer
from diopter.compiler import(
    CompilationSetting,
    SourceProgram
)
import helper, ast_parser

from anytree import Node



def ratio_filter(program: SourceProgram, Osettings: CompilationSetting, best_ratio: float) -> bool:
    ratio = helper.get_ratio(program,Osettings)

    #0. remove comments from code
    code = helper.comment_remover(program.code)

    print("---")
    ast_code_size = ast_parser.get_code_size(code)
    print(ast_code_size)
    print("---")

    return ratio>best_ratio and ast_code_size >30 




#=======================================================
# Test modules, which get passed to ReduceObjectSize, determine interestingness of funciton
#=======================================================

# with minimum amount of lines without ; // a lot of useless function declarations
# with minimum amount of lines and AST // contains unused variables

# Only ensures that the code gets continuosly reduced, without putting constraints on the minimum amount of lines/code
def test_0(self, program: SourceProgram) -> bool:
    ratio = helper.get_ratio(program,self.Os)
    return ratio > self.bestRatio

# Sets a bound to the minimum amount of lines. It simply counts the number of lines in the output, without
#  considering their content (f.ex a line which only contains ;). We count lines on a clang-formatted file
def test_1(self, program: SourceProgram) -> bool:
    formatted_code = helper.comment_remover(program.code)
    formatted_code = helper.clang_formatter(formatted_code)

    #output = [s for s in formatted_code.splitlines() if not (s.replace(";","")).isspace()] # Remove lines containing only spaces or only ;
    ratio = helper.get_ratio(program,self.Os)
    return ratio > self.bestRatio and len(formatted_code.splitlines())>15

# Instead of counting the lines use an AST (abstract syntax tree) and count the nodes contained withn
def test_2(self, program: SourceProgram) -> bool:

    ...

# Start processing AST by removing blank lines
def test_3(self, program: SourceProgram) -> bool:
    ratio = helper.get_ratio(program,self.Os)
    root = ast_parser.get_ast_tree(program.code)
    for node in root.descendants:
            if "NullStmt" in node.name:
                node.parent = None
    return ratio > self.bestRatio and ast_parser.get_ast_size(root) > 30


# Ensure that no unused functions/variables are contained in the final program
def test_4(self, program: SourceProgram) -> bool:
    ... 

test_function_dict = {
    "test_0": test_0,
    "test_1": test_1,
    # "test_2": test_2,
    "test_3": test_3,
    # "test_4": test_4,
}

def get_test_functions():
    return test_function_dict.keys()


class ReduceObjectSize(ReductionCallback):
    def __init__(
        self,
        san: Sanitizer,
        Os: CompilationSetting,
        test_id: int,
    ):
        self.san = san
        self.Os = Os
        self.bestRatio = 0
        self.test_id = test_id
    
    def test(self, program: SourceProgram) -> bool:
        if not (res := self.san.sanitize(program)):
            print(f" {res} Sani fail")
            return False     

        if test_function_dict[self.test_id](self, program):
            self.bestRatio = helper.get_ratio(program, self.Os)
            return True
        return False
        
        
        # Check if the ratio has increased!
        # if ratio_filter(program, self.Os, self.bestRatio):
        #     self.bestRatio = helper.get_ratio(program, self.Os)
        #     return True
        # return False
    
