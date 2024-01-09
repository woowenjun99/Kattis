"""
Adapted by CP4 from Steven Halim

To be used for reference in the future.
"""
from heapq import heappush, heappop

def dijkstra(graph, src, vertices):
    """
    graph: An adjacency list built with defaultdict(list).
    src: The source node.
    vertices: The number of vertices

    Returns the distance array
    """
    # (Modified) Dijkstra's routine
    dist = [float("inf") for _ in range(vertices)]
    dist[src] = 0
    pq = []
    heappush(pq, (0, src))

    # sort the pairs by non-decreasing distance from s
    while pq:                    # main loop
        d, u = heappop(pq)                  # shortest unvisited u
        if (d > dist[u]): continue          # a very important check
        for v, w in graph[u]:                  # all edges from u
            if (dist[u]+w >= dist[v]): continue # not improving, skip
            dist[v] = dist[u]+w             # relax operation
            heappush(pq, (dist[v], v))  

    return dist
    

