import sys
from collections import deque

input = sys.stdin.readline
n, m, k = list(map(int, input().split()))
waterfalls = list(map(int, input().split()))
grid = [list(input().strip()) for _ in range(n)]
visited = [[False] * m for _ in range(n)]
for waterfall in waterfalls: grid[0][waterfall] = "~"

def bfs(row, column):
    q = deque()
    q.append([row, column])
    while q:
        front = q.popleft()

        if grid[front[0]][front[1]] == "#" or grid[front[0]][front[1]] == "?": 
            continue

        visited[front[0]][front[1]] = True
        grid[front[0]][front[1]] = "~"

        # If we are processing the last row
        if front[0] + 1 == n: 
            continue

        if grid[front[0] + 1][front[1]] == "?" or grid[front[0] + 1][front[1]] == "#":
            if front[1] - 1 >= 0 and grid[front[0]][front[1] - 1] != "~" and not visited[front[0]][front[1] - 1]:
                visited[front[0]][front[1] - 1] = True 
                q.append([front[0], front[1] - 1])
            if front[1] + 1 < m and grid[front[0]][front[1] + 1] != "~" and not visited[front[0]][front[1] + 1]: 
                visited[front[0]][front[1] + 1] = True
                q.append([front[0], front[1] + 1])
        else:
            if not visited[front[0] + 1][front[1]]:
                visited[front[0] + 1][front[1]] = True
                q.append([front[0] + 1, front[1]])

for i in range(m):
    if grid[0][i] == "~":
        bfs(0, i)

for line in grid: sys.stdout.write("".join(line) + "\n")