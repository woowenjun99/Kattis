import sys
from collections import defaultdict
from heapq import heappop, heappush
from math import ceil

input = sys.stdin.readline
graph = defaultdict(list)

vertices, edges = list(map(int, input().split()))
alice, bob = list(map(int, input().split()))

# Create undirected graph because people can travel from
# one place to another.
for _ in range(edges):
    src, dest = list(map(int, input().split()))
    graph[src].append(dest)
    graph[dest].append(src)

# NOTE: Shortest path from Alice to Bob will also be
# the shortest path from Bob to Alice
parents = [-1] * vertices
distances = [float("inf")] * vertices
distances[alice] = 0
pq = [[0, alice]]

while pq:
    distance, src = heappop(pq)
    if distance > distances[src]: continue
    for destination in graph[src]:
        if distances[src] + 1 >= distances[destination]: continue
        distances[destination] = distances[src] + 1
        parents[destination] = src
        heappush(pq, [distances[destination], destination])

# parents will store the shortest path from Bob to Alice so we can
# travel from Bob to Alice and count the number of nodes travelled.
number_of_vertices_travelled = 0
while parents[bob] != -1:
    bob = parents[bob]
    number_of_vertices_travelled += 1
sys.stdout.write(f"{ceil(number_of_vertices_travelled / 2)}\n")