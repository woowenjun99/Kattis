from heapq import heappush, heappop
from math import dist
            
for _ in range(int(input())):
    m = int(input())
    coordinates = [list(map(float, input().split())) for _ in range(m)]

    taken = [False for _ in range(m)]
    pq = []
    taken[0] = True
    for v in range(1, m): heappush(pq, (dist(coordinates[0], coordinates[v]), v))
    
    mst_cost = num_taken = 0
    while pq and num_taken < m - 1:
        w, u = heappop(pq)
        if not taken[u]:
            num_taken += 1
            mst_cost += w
            taken[u] = True
            for v in range(m):
                if v == u or taken[v]: continue
                heappush(pq, (dist(coordinates[u], coordinates[v]), v))

    print(mst_cost)