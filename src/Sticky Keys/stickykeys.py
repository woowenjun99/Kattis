import sys

input = sys.stdin.readline
stack = []
sentence = input().strip()
for letter in sentence:
    if not stack or stack[-1] != letter: stack.append(letter)
print("".join(stack))