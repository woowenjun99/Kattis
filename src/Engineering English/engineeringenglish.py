import sys

lines = sys.stdin.readlines()
appeared = set()
for line in lines:
    line = line.strip()
    words = line.split()
    stack = []
    for word in words:
        if word.lower() in appeared: stack.append(".")
        else: stack.append(word)
        appeared.add(word.lower())
    print(" ".join(stack))