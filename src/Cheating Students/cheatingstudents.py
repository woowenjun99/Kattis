from heapq import heappop, heappush

def process(pq, coordinates, u, visited):
    visited[u] = True
    for v, coordinate in enumerate(coordinates):
        if u == v: continue
        heappush(pq, (abs(coordinates[u][0] - coordinates[v][0]) + abs(coordinates[v][1] - coordinates[u][1]), v))
    
n = int(input())
coordinates = [tuple(map(int, input().split())) for _ in range(n)]
visited = [False] * n
pq = []
process(pq, coordinates, 0, visited)

mst_cost = nums_processed = 0
while pq and nums_processed < n - 1:
    w, v = heappop(pq)
    if visited[v]: continue
    mst_cost += w * 2
    nums_processed += 1
    process(pq, coordinates, v, visited)
    
print(mst_cost)