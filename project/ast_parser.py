# Utilities to help parse Abstract syntax trees

import subprocess
import tempfile
from anytree import Node, RenderTree



test_output = """test.c:17:1: warning: non-void function does not return a value [-Wreturn-type]
}
^
test.c:19:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main(){}
^
test.c:19:1: note: change return type to 'int'
void main(){}
^~~~
int
TranslationUnitDecl 0x160aba8 <<invalid sloc>> <invalid sloc>
|-TypedefDecl 0x160b3d0 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x160b170 '__int128'
|-TypedefDecl 0x160b440 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x160b190 'unsigned __int128'
|-TypedefDecl 0x160b748 <<invalid sloc>> <invalid sloc> implicit __NSConstantString 'struct __NSConstantString_tag'
| `-RecordType 0x160b520 'struct __NSConstantString_tag'
|   `-Record 0x160b498 '__NSConstantString_tag'
|-TypedefDecl 0x160b7e0 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x160b7a0 'char *'
|   `-BuiltinType 0x160ac50 'char'
|-TypedefDecl 0x160bad8 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list 'struct __va_list_tag[1]'
| `-ConstantArrayType 0x160ba80 'struct __va_list_tag[1]' 1 
|   `-RecordType 0x160b8c0 'struct __va_list_tag'
|     `-Record 0x160b838 '__va_list_tag'
|-VarDecl 0x1661850 <test.c:2:1, col:13> col:5 global 'int' cinit
| `-IntegerLiteral 0x1661900 <col:13> 'int' 5
|-FunctionDecl 0x1661970 <line:4:1, line:17:1> line:4:5 a 'int ()'
| `-CompoundStmt 0x1661eb0 <col:8, line:17:1>
|   |-NullStmt 0x1661a10 <line:5:5>
|   |-NullStmt 0x1661a18 <line:6:5>
|   |-NullStmt 0x1661a20 <line:7:5>
|   |-DeclStmt 0x1661ac8 <line:8:5, col:14>
|   | `-VarDecl 0x1661a40 <col:5, col:13> col:9 used d 'int' cinit
|   |   `-IntegerLiteral 0x1661aa8 <col:13> 'int' 0
|   |-DeclStmt 0x1661b80 <line:9:5, col:14>
|   | `-VarDecl 0x1661af8 <col:5, col:13> col:9 used c 'int' cinit
|   |   `-IntegerLiteral 0x1661b60 <col:13> 'int' 1
|   |-IfStmt 0x1661db0 <line:10:5, line:14:5> has_else
|   | |-BinaryOperator 0x1661bf0 <line:10:8, col:10> 'int' '>'
|   | | |-ImplicitCastExpr 0x1661bd8 <col:8> 'int' <LValueToRValue>
|   | | | `-DeclRefExpr 0x1661b98 <col:8> 'int' lvalue Var 0x1661a40 'd' 'int'
|   | | `-IntegerLiteral 0x1661bb8 <col:10> 'int' 0
|   | |-CompoundStmt 0x1661cc8 <col:12, line:12:5>
|   | | `-BinaryOperator 0x1661ca8 <line:11:9, col:15> 'int' '='
|   | |   |-DeclRefExpr 0x1661c10 <col:9> 'int' lvalue Var 0x1661a40 'd' 'int'
|   | |   `-BinaryOperator 0x1661c88 <col:13, col:15> 'int' '+'
|   | |     |-ImplicitCastExpr 0x1661c70 <col:13> 'int' <LValueToRValue>
|   | |     | `-DeclRefExpr 0x1661c30 <col:13> 'int' lvalue Var 0x1661a40 'd' 'int'
|   | |     `-IntegerLiteral 0x1661c50 <col:15> 'int' 1
|   | `-CompoundStmt 0x1661d98 <line:12:11, line:14:5>
|   |   `-BinaryOperator 0x1661d78 <line:13:9, col:15> 'int' '='
|   |     |-DeclRefExpr 0x1661ce0 <col:9> 'int' lvalue Var 0x1661a40 'd' 'int'
|   |     `-BinaryOperator 0x1661d58 <col:13, col:15> 'int' '+'
|   |       |-ImplicitCastExpr 0x1661d40 <col:13> 'int' <LValueToRValue>
|   |       | `-DeclRefExpr 0x1661d00 <col:13> 'int' lvalue Var 0x1661a40 'd' 'int'
|   |       `-IntegerLiteral 0x1661d20 <col:15> 'int' 2
|   `-BinaryOperator 0x1661e90 <line:15:5, col:11> 'int' '='
|     |-DeclRefExpr 0x1661de0 <col:5> 'int' lvalue Var 0x1661af8 'c' 'int'
|     `-BinaryOperator 0x1661e70 <col:9, col:11> 'int' '+'
|       |-ImplicitCastExpr 0x1661e40 <col:9> 'int' <LValueToRValue>
|       | `-DeclRefExpr 0x1661e00 <col:9> 'int' lvalue Var 0x1661af8 'c' 'int'
|       `-ImplicitCastExpr 0x1661e58 <col:11> 'int' <LValueToRValue>
|         `-DeclRefExpr 0x1661e20 <col:11> 'int' lvalue Var 0x1661a40 'd' 'int'
`-FunctionDecl 0x1661f48 <line:19:1, col:13> col:6 main 'void ()'
  `-CompoundStmt 0x1661fe8 <col:12, col:13>
2 warnings generated.
"""


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

#extract_ast_from_output(test_output)

