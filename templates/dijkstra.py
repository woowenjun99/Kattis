"""
Adapted by CP4 from Steven Halim

To be used for reference in the future.
"""
from heapq import heappush, heappop

def main():
    f = open("dijkstra_in.txt", "r")

    V, E, s = map(int, f.readline().split(" "))
    AL = [[] for u in range(V)]
    for _ in range(E):
        u, v, w = map(int, f.readline().split(" "))
        AL[u].append((v, w))                     # directed graph

    # (Modified) Dijkstra's routine
    dist = [float("inf") for _ in range(V)]
    dist[s] = 0
    pq = []
    heappush(pq, (0, s))

    # sort the pairs by non-decreasing distance from s
    while pq:                    # main loop
        d, u = heappop(pq)                  # shortest unvisited u
        if (d > dist[u]): continue          # a very important check
        for v, w in AL[u]:                  # all edges from u
            if (dist[u]+w >= dist[v]): continue # not improving, skip
            dist[v] = dist[u]+w             # relax operation
            heappush(pq, (dist[v], v))  

    for u in range(V):
        print("SSSP({}, {}) = {}".format(s, u, dist[u]))

main()
    

