import sys
from collections import deque

input = sys.stdin.readline
n = int(input())

for _ in range(n):
    sentence = input().strip()
    dq = deque()
    index = 0
    for letter in sentence:
        if letter == "]":
            index = len(dq)
        elif letter == "[":
            index = 0
        elif letter == "<":
            if index != 0:
                index -= 1
                dq.__delitem__(index)
        else:
            dq.insert(index, letter)
            index += 1

    sys.stdout.write("".join(dq) + "\n")