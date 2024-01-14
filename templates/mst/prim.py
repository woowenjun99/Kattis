from heapq import heappush, heappop
from collections import defaultdict
import sys

input = sys.stdin.readline

# Build graph
v, e = list(map(int, input().split()))
graph = defaultdict(list)
for _ in range(e):
    src, dest, weight = list(map(int, input().split()))
    graph[src].append([dest, weight])
    graph[dest].append([src, weight])

pq = []
taken = set()

# NOTE Very similar to DFS except that instead of processing it immediately
# we just push into the heap.
def process(u):
    taken.add(u)
    for v, w in graph[u]:
        if not taken[v]:
            heappush(pq, [w, v])

cost_of_mst = nodes_processed = 0

process(0)
while pq and nodes_processed < v - 1:
    w, u = heappop(pq)
    if not taken[u]:
        nodes_processed += 1
        cost_of_mst += w
        process(u)
