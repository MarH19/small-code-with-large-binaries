# Utilities to help parse Abstract syntax trees

import subprocess
import tempfile
from anytree import Node, RenderTree

def count_ast_nodes():
    ...


def parse_tree(parent: Node, previous_depth:int):
    global remaining_input

    if len(remaining_input)==0:
        return
    splitInnput = remaining_input[0].split("-")
    currentDepth = len(splitInnput[0])
    currentNode = Node(splitInnput[1],parent=parent)
    remaining_input = remaining_input[1:]
    
    while len(remaining_input)>0:
        splitInnput = remaining_input[0].split("-")
        node_depth = len(splitInnput[0])
        if node_depth == currentDepth:
            parse_tree(parent,currentDepth)
            return
        elif node_depth > currentDepth:
            parse_tree(currentNode,currentDepth)
        else:
            return
        remaining_input = remaining_input[1:]
        


    # We are at current node.
    # If following node 1 deeper:
    # Eat. Continue
    # If following  node >1 deeper parse from observed node
    # If following node empy: return
    # if following node not deeper return
    # if following node same depth as own: parse_tree

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

#if called as main expect file as input and return ast of that file