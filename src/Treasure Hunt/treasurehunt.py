import sys

input = sys.stdin.readline
r, c = list(map(int, input().split()))
visited = [[False] * c for _ in range(r)]
grid = [list(input().strip()) for _ in range(r)]
# [row, column]
current = [0, 0]
steps = 0
while current[0] < r and current[0] >= 0 and current[1] < c and current[1] >= 0:
    if visited[current[0]][current[1]] == True:
        print("Lost")
        exit(0)

    visited[current[0]][current[1]] = True

    if grid[current[0]][current[1]] == "T":
        print(steps)
        exit(0)

    if grid[current[0]][current[1]] == "N":
        steps += 1
        current[0] -= 1
        continue

    if grid[current[0]][current[1]] == "S":
        steps += 1
        current[0] += 1
        continue

    if grid[current[0]][current[1]] == "W":
        steps += 1
        current[1] -= 1
        continue

    if grid[current[0]][current[1]] == "E":
        steps += 1
        current[1] += 1
        continue

print("Out")