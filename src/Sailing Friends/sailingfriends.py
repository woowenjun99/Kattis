import sys
from collections import defaultdict, deque

input = sys.stdin.readline
n, b, m = list(map(int, input().split()))
graph = defaultdict(list)

# Keep track of the people with a boat.
boats = [False] * n
indices = list(map(int, input().split()))
for index in indices: boats[index - 1] = True

# Keep track in adjacency list
for _ in range(m):
    src, dest = list(map(int, input().split()))
    src -= 1
    dest -= 1
    graph[src].append([dest, boats[dest]])
    graph[dest].append([src, boats[src]])

# Count connected component
visited = [False] * n
def has_boat_in_connected_component(src):
    visited[src] = True
    has_boat = 0 if boats[src] else 1
    q = deque()
    q.append(src)
    while q:
        front = q.popleft()
        for neighbour, neighbour_has_boat in graph[front]:
            if neighbour_has_boat: has_boat = 0

            if not visited[neighbour]:
                visited[neighbour] = True
                q.append(neighbour)

    return has_boat

response = 0
for i in range(n):
    if not visited[i]:
        response += has_boat_in_connected_component(i)

sys.stdout.write(f"{response}\n")