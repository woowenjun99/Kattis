"""
A graph is bipartite G = (V, E) if V can be partitioned into 2 sets such that 
(u, v) in E fulfils the condition whereby they are both in seperate set. We
can determine whether a graph is bipartite using the colouring algorithm 

(1). This only works for undirected graph as definition of bipartite is 
different for directed graph.

(2). Time complexity: O(V + E)
"""

import sys
from collections import defaultdict, deque

input = sys.stdin.readline
v, e = list(map(int, input().split()))

# Build graph
graph = defaultdict(list)
for _ in range(e):
    src, dest = list(map(int, input().split()))
    graph[src].append(dest)
    graph[dest].append(src)

# Perform colouring algorithm
colours = [-1] * v
for src in graph:
    if colours[src] == -1:
        colours[src] = 0
        q = deque([src, 0])
        while q:
            front = q.popleft()
            for neighbour in graph[front]:
                # NOTE The neighbouring node cannot have the same colour as the parent node.
                if colours[neighbour] == front[1]:
                    print("Cannot be bipartite")
                    exit(0)
                # NOTE If the neighbour is not coloured, we assign an opposite colour to the node.
                if colours[neighbour] == -1:
                    colours[neighbour] = 1 - front[1]
                    q.append([neighbour, colours[neighbour]])
print("Graph is bipartite")