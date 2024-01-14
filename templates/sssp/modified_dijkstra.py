import sys; input = sys.stdin.readline
from collections import defaultdict
from heapq import heappop, heappush

nodes, edges, source = list(map(int, input().split()))
graph = defaultdict(list)
distances = [float("inf")] * nodes
distances[source] = 0

# Build graph
for _ in range(edges):
    src, dest, weight = list(map(int, input().split()))
    graph[src].append([dest, weight])
    graph[dest].append([src, weight])

# Modified Dijkstra
pq = [(0, 0)]
while pq:
    d, u = heappop(pq)
    if d > distances[u]: continue
    for v, w in graph[u]:
        if distances[u] + w >= distances[v]: continue
        distances[v] = distances[u] + w
        heappush(pq, (distances[v], v))

print(distances)