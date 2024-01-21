"""
Topic: Graph Traversal

A simple floodfill algorithm. The optimization would be that
when the satellite performs a rescans, we check whether the
node beside is sweden and if yes, we just perform BFS from it.
"""
import sys
from collections import deque

input = sys.stdin.readline
r = int(input())
c = int(input())
u = int(input())

grid = [list(input().strip()) for _ in range(r)]
is_sweden = [[False] * c for _ in range(r)]

def bfs(grid, row, column, response, is_sweden):
    queue = deque()
    queue.append([row, column])
    is_sweden[row][column] = True

    while queue:
        y, x = queue.popleft()

        if y >= 1 and grid[y - 1][x] == "#" and not is_sweden[y - 1][x]:
            is_sweden[y - 1][x] = True
            queue.append([y - 1, x])
            response[0] += 1
        
        if y + 1 < len(grid) and grid[y + 1][x] == "#" and not is_sweden[y + 1][x]:
            is_sweden[y + 1][x] = True
            queue.append([y + 1, x])
            response[0] += 1

        if x >= 1 and grid[y][x - 1] == "#" and not is_sweden[y][x - 1]:
            is_sweden[y][x - 1] = True
            queue.append([y, x - 1])
            response[0] += 1

        if x + 1 < len(grid[y]) and grid[y][x + 1] == "#" and not is_sweden[y][x + 1]:
            is_sweden[y][x + 1] = True
            queue.append([y, x + 1])
            response[0] += 1

response = [1]
coordinates = [0, 0]
for i in range(len(grid)):
    for j in range(len(grid[i])):
        if grid[i][j] == "S":
            bfs(grid, i, j, response, is_sweden)
            coordinates = [i, j]
            break
print(response[0])

for _ in range(u):
    i, j = list(map(int, input().split()))
    i -= 1
    j -= 1
    grid[i][j] = "#"
    is_valid = ((i - 1 >= 0 and is_sweden[i - 1][j]) or 
        (j + 1 < len(is_sweden[i]) and is_sweden[i][j + 1]) or
        (i + 1 < len(is_sweden) and is_sweden[i + 1][j]) or
        (j - 1 >= 0 and is_sweden[i][j - 1]))
    if is_valid: 
        response[0] += 1
        bfs(grid, i, j, response, is_sweden)
    print(response[0])
