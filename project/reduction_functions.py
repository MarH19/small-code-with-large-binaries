from diopter.reducer import ReductionCallback
from diopter.sanitizer import Sanitizer
from diopter.compiler import(
    CompilationSetting,
    SourceProgram
)
import helper, ast_parser
import re
from anytree import Node

from static_globals.instrumenter import annotate_with_static
from saver import ProgressiveSaver
import saver



# def ratio_filter(program: SourceProgram, Osettings: CompilationSetting, best_ratio: float) -> bool:
#     ratio = helper.get_ratio(program,Osettings)

#     #0. remove comments from code
#     code = helper.comment_remover(program.code)

#     print("---")
#     ast_code_size = ast_parser.get_code_size(code)
#     print(ast_code_size)
#     print("---")

#     return ratio>best_ratio and ast_code_size >30 




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
    # Legacy test do not remove
    ...

# Start processing AST by removing blank lines
def test_3(self, program: SourceProgram) -> bool:
    ratio = helper.get_ratio(program,self.Os)
    root = ast_parser.get_ast_tree(program.code)
    
    #ast_parser.print_ast(root) #FIXME this would only show up in logs

    for node in root.descendants:
            if "NullStmt" in node.name:
                node.parent = None
    return ratio > self.bestRatio and ast_parser.get_ast_size(root) > 30


# Compute the ratio using AST instead of plain lines of code
def test_4(self, program: SourceProgram) -> bool:
    root = ast_parser.get_ast_tree(program.code)
    ratio = helper.get_tree_ratio(program,self.Os,root)

    return ratio > self.bestRatio

# Ensure that no unused functions/variables are contained in the final program and count as tree nodes
def test_5(self, program: SourceProgram) -> bool:
    root = ast_parser.get_ast_tree(program.code)
    # pattern in unused var: 1. warning (type) 2. value of wunused var or function 3. ^
    unused_var = helper.get_unused_var(program)
    wunused = []
    existing_values = set()
    for idx, i in enumerate(unused_var):
        # code to check for which types of warnings there are in the code 
        match = re.search(r'\[(.*?)\]', i)
        if match:
            value_inside_brackets = match.group(1)
            if value_inside_brackets not in existing_values:
                existing_values.add(value_inside_brackets)

        # add -Wunused-variable warnings to a list
        if "[-Wunused-variable]" in i:
            wunused.append((unused_var[idx],unused_var[idx+1]))
            
    for node in root.descendants:
        # check for wunused variables in AST
        if "DeclStmt" in node.name: 
            for idx, i in enumerate(wunused):
                # extract line and column number of the wunused list
                lincol_numbers = wunused[idx][0].split(":")[1:3]
                # check if line number matches
                if lincol_numbers[0] in node.name:
                    # iterate over all "VarDecl" and check if column number matches
                    for i in node.children:
                        if lincol_numbers[1] in i.name:
                            node.parent = None
        if "NullStmt" in node.name:
            node.parent = None

    ratio = helper.get_tree_ratio(program, self.Os, root)
    return ratio > self.bestRatio

# Make global variables and functions (except main) static
def test_6(self, program: SourceProgram) -> bool:
    program = annotate_with_static(program)
    return test_4(self, program)


test_function_dict = {
    "test_0": test_0,
    "test_1": test_1,
    # "test_2": test_2,
    # "test_3": test_3,
    # "test_4": test_4,
    # "test_5": test_5
    # "test_6":test_6,
}

def get_test_functions():
    return test_function_dict.keys()


class ReduceObjectSize(ReductionCallback):
    def __init__(
        self,
        san: Sanitizer,
        Os: CompilationSetting,
        test_id,
        progr_saver=None
    ):
        self.san = san
        self.Os = Os
        self.bestRatio = 0
        self.test_id = test_id
        self.progr_saver = progr_saver
    
    def test(self, program: SourceProgram) -> bool:
        if not (res := self.san.sanitize(program)):
            print(f" {res} Sani fail")
            return False
        
        if self.progr_saver is not None:
            self.progr_saver.save_test_substep(self.test_id, program.code, helper.get_ratio(program, self.Os))

        if test_function_dict[self.test_id](self, program):
            self.bestRatio = helper.get_ratio(program, self.Os)
            return True
        return False
    
