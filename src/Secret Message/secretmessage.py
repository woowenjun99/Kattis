import sys
from math import ceil

input = sys.stdin.readline
n = int(input())
for _ in range(n):
    sentence = input().strip()
    L = len(sentence)
    row = ceil(L ** 0.5)
    sentence += (row ** 2 - L) * "*"

    grid = [[""] * row for _ in range(row)]
    index = 0
    for i in range(row - 1, -1, -1):
        for j in range(row):
            grid[i][j] = sentence[index]
            index += 1
    for i in range(row):
        for j in range(row):
            if grid[j][i] == "*": continue
            print(grid[j][i], end="")
    print()