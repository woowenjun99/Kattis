import sys

input = sys.stdin.readline
n = input()

stack = []
line = input().strip("\n")
for index, c in enumerate(line):
    # Ignore the spaces
    if c == " ": continue
    elif c == "[" or c == "(" or c == "{": stack.append(c)
    else:
        if not stack or (c == "]" and stack[-1] != "[") or (c == ")" and stack[-1] != "(") or (c == "}" and stack[-1] != "{"):
            sys.stdout.write(f"{c} {index}\n")
            exit(0)
        else:
            stack.pop()


sys.stdout.write("ok so far\n")