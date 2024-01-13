import sys; input = sys.stdin.readline
from collections import defaultdict

nodes, edges, source = list(map(int, input().split()))
graph = defaultdict(list)
distances = [float("inf")] * nodes
distances[source] = 0

# Build graph
for _ in range(edges):
    src, dest, weight = list(map(int, input().split()))
    graph[src].append([dest, weight])
    graph[dest].append([src, weight])

# Relaxation
for _ in range(nodes - 1):
    for u in graph:
        for v, w in graph[u]:
            if distances[u] + w >= distances[v]: continue
            distances[v] = distances[u] + w

# Negative cycle detection
has_negative_cycle = False
for u in graph:
    for v, w in graph[u]:
        if distances[u] + w >= distances[v]: continue
        has_negative_cycle = True
        break

if has_negative_cycle:
    print("Negative cycle detected!")
    exit(0)

print(distances)