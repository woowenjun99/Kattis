from heapq import heappop, heappush

n = int(input())
vertices = [list(map(int, input().split())) for _ in range(n + 2)]

distances = [float("inf")] * (n + 2)
parents = [-1] * (n + 2)
parents[n + 1] = n
distances[n] = 0
pq = [(0, n)]
while pq:
    d, u = heappop(pq)
    if d > distances[u]: continue
    for v in range(n + 2):
        if u == v: continue
        dx, dy = vertices[u][0] - vertices[v][0], vertices[u][1] - vertices[v][1]
        w = dx * dx + dy * dy
        if distances[u] + w >= distances[v]: continue
        distances[v] = distances[u] + w
        parents[v] = u
        heappush(pq, (distances[v], v))

# Travel through the parent array
if parents[n + 1] == n:
    print("-")
    exit(0)

def backtrack(parent):
    if parent == -1: return
    backtrack(parents[parent])
    if parent == n or parent == n + 1: return
    print(parent)

backtrack(n + 1)