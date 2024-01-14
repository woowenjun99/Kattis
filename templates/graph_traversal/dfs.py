from collections import defaultdict
import sys

input = sys.stdin.readline

# Build graph
v, e = list(map(int, input().split()))
graph = defaultdict(list)
for _ in range(e):
    src, dest = list(map(int, input().split()))
    graph[src].append(dest)
    graph[dest].append(src)

# DFS
visited = [False] * v
def dfs(src):
    visited[src] = True
    for neighbour in graph[src]:
        if not visited[neighbour]:
            dfs(neighbour)
