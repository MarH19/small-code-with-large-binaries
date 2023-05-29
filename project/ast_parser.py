# Utilities to help parse Abstract syntax trees
from argparse import ArgumentParser
import subprocess
import tempfile
from anytree import Node, RenderTree

def __parse_tree__(parent: Node, previous_depth:int):
    global remaining_input

    splitInnput = remaining_input[0].split("-")
    currentDepth = len(splitInnput[0])
    currentNode = Node(splitInnput[1],parent=parent)
    remaining_input = remaining_input[1:]

    while len(remaining_input)!=0:
        next_depth = len(remaining_input[0].split("-")[0])
        if next_depth < currentDepth:
            return
        if next_depth == currentDepth:
            currentDepth = next_depth
            currentNode = Node(remaining_input[0].split("-")[1], parent=parent)
            remaining_input = remaining_input[1:]
        if next_depth > currentDepth:
            __parse_tree__(currentNode, 0)


def get_ast_tree(code: str)-> Node:
    global remaining_input
    with tempfile.NamedTemporaryFile(mode="w", suffix=".c", delete=True) as f:
        f.write(code)

    # 1. call clang -Xclang -ast-dump -fsyntax-only outputs/with_synatx/output_5.c
        cmd_str = "clang -Xclang -ast-dump -fsyntax-only "+f.name
        out = subprocess.run(cmd_str, shell=True, stdout=subprocess.PIPE)
        ast_dump = out.stdout.decode("utf-8")

    # 2. Remove warnings from output (all lines above TranslationUnitDecl)
        input = ast_dump.split("TranslationUnitDecl")
        input = input[1].splitlines()
        input = input[1:-1]
        
    # 3. Generate AST

        remaining_input = input
        root = Node("root")

        __parse_tree__(root,0)

    # 4. Remove Type def declarations, since they are not a valuable metric
    # FIXME THIS WAS A BUG. IF WE DON'T WANT A FEATURE IT SHOULD BE ADDED
    # Explaination: by removing all nodes of a specific type we tell C-Reduce that it is not important for us if these are removed. It wil thus not be
    # incentivized to remove them
        # for node in root.descendants:
        #     if "TypedefDecl" in node.name:
        #         node.parent = None

        return root
    
def print_ast(ast_tree: Node):
    for pre, fill, node in RenderTree(ast_tree):
        print("%s%s" % (pre,node.name))

def get_ast_size(ast_tree: Node):
    return len(ast_tree.descendants)


if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument("-f", "--file", dest="filename",
                        help="FILE from which to read", metavar="FILE")
    args = parser.parse_args()
    
    cmd_str = "clang -Xclang -ast-dump -fsyntax-only "+args.filename
    out = subprocess.run(cmd_str, shell=True, stdout=subprocess.PIPE)
    print(out.stdout.decode("utf-8"))
