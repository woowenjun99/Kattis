import sys

input = sys.stdin.readline
stack = []
sentence = list(input().strip())
for letter in sentence:
    if letter != "<": stack.append(letter)
    elif stack and letter == "<": stack.pop()
print("".join(stack))