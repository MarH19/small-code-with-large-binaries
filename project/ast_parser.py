# Utilities to help parse Abstract syntax trees
from argparse import ArgumentParser
import subprocess
import tempfile
from anytree import Node, RenderTree

def count_ast_nodes():
    ...


def parse_tree(parent: Node, previous_depth:int):
    global remaining_input

    splitInnput = remaining_input[0].split("-")
    currentDepth = len(splitInnput[0])
    currentNode = Node(splitInnput[1],parent=parent)
    remaining_input = remaining_input[1:]

    #print(splitInnput[1])

    while len(remaining_input)!=0:
        next_depth = len(remaining_input[0].split("-")[0])
        if next_depth < currentDepth:
            return
        if next_depth == currentDepth:
            currentDepth = next_depth
            currentNode = Node(remaining_input[0].split("-")[1], parent=parent)
            remaining_input = remaining_input[1:]
        if next_depth > currentDepth:
            parse_tree(currentNode, 0)

def extract_ast_from_output(input):
    global remaining_input
    input = input.split("TranslationUnitDecl")
    input = input[1].splitlines()
    input = input[1:-1]
    

    remaining_input = input
    root = Node("root")
    print("----------------")
    parse_tree(root,0)

    for node in root.descendants:
        if "TypedefDecl" in node.name:
            node.parent = None
        if "NullStmt" in node.name:
            node.parent = None
        if "VarDecl" in node.name:
            node.parent = None
        #TODO ensure main is not empty!

    for pre, fill, node in RenderTree(root):
        print("%s%s" % (pre,node.name))
    print(root)

    return root

def get_ast_size(input:str) -> int:
    print(input)
    root = extract_ast_from_output(input)
    print(f"Size of program: {len(root.descendants)}")
    return len(root.descendants)


def get_code_size(code: str) -> int:
    with tempfile.NamedTemporaryFile(mode="w", suffix=".c", delete=True) as f:
        f.write(code)

    # 1. call clang -Xclang -ast-dump -fsyntax-only outputs/with_synatx/output_5.c
        cmd_str = "clang -Xclang -ast-dump -fsyntax-only "+f.name
        out = subprocess.run(cmd_str, shell=True, stdout=subprocess.PIPE)
    # 2. pass arguments to get_ast_size
        return get_ast_size(out.stdout.decode("utf-8"))

if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument("-f", "--file", dest="filename",
                        help="FILE from which to read", metavar="FILE")

    args = parser.parse_args()
    code = ""
    cmd_str = "clang -Xclang -ast-dump -fsyntax-only "+args.filename
    out = subprocess.run(cmd_str, shell=True, stdout=subprocess.PIPE)
    get_ast_size(out.stdout.decode("utf-8"))
    


    # with open(args.filename, "r") as f:
    #     for line in f.readlines():
    #         code+=line

    # ast_size = get_code_size(code)

    # print(ast_size)