import re
import subprocess


# Source Stack-overflow: https://stackoverflow.com/questions/241327/remove-c-and-c-comments-using-python
def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

def clang_formatter(code):
    proc = subprocess.Popen(
        ["clang-format"],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        universal_newlines=True,
    )
    stdout, stderr = proc.communicate(input=code)
    output = stdout

    return output