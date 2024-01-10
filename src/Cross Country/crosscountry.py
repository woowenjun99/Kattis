"""
Solution is just perform SSSP on a dense graph.
Time complexity is O(V^2) but since V = 1000, 
Bellman Ford works as well.
"""
from collections import defaultdict
from heapq import heappush, heappop
import sys

input = sys.stdin.readline
graph = defaultdict(list)

n, s, t = list(map(int, input().split()))
for index in range(n):
    line = list(map(int, input().split()))
    for idx, nodes in enumerate(line):
        if idx == index: continue
        graph[index].append([idx, nodes])

distances = [float("inf")] * n
distances[s] = 0
pq = [[0, s]]

while pq:
    distance, source = heappop(pq)
    if distance > distances[source]: continue
    for neighbour, weight in graph[source]:
        if distances[source] + weight >= distances[neighbour]: continue
        distances[neighbour] = distances[source] + weight
        heappush(pq, [distances[neighbour], neighbour])

sys.stdout.write(f"{distances[t]}\n")