from collections import deque

n, m = map(int, input().split())
adjacency_list = [[] for _ in range(n)]
for _ in range(m):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    adjacency_list[u].append(v)
    adjacency_list[v].append(u)

distances = [float("inf")] * n
queue = deque([0])
distances[0] = 0

while queue:
    u = queue.popleft()
    for neighbour in adjacency_list[u]:
        if distances[u] + 1 < distances[neighbour]:
            distances[neighbour] = distances[u] + 1
            queue.append(neighbour)

print(distances[-1] - 1)