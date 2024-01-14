"""
Topic: 2D array

Simulate with a 2D array.
"""
import sys

input = sys.stdin.readline
n, m = list(map(int, input().split()))
grid = [[-1] * n for _ in range(m)]

# grid[i][j] stores -1 if it is unused. Otherwise, it stores (current, next)
for i in range(m):
    ring = int(input()) - 1
    grid[i][ring] = ring + 1
    grid[i][ring + 1] = ring

final = [0] * n
for i in range(n):
    current_column = i
    for current_row in range(m):
        if grid[current_row][current_column] == -1: continue
        current_column = grid[current_row][current_column]
    final[current_column] = i + 1

for num in final: sys.stdout.write(f"{num}\n")