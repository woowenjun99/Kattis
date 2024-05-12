from heapq import heappop, heappush

def process(u, taken, AL, pq):
    taken[u] = True
    for v, w in AL[u]:
        if taken[v]: continue
        heappush(pq, (w, v, u))

n, m = list(map(int, input().split()))
while not (n == 0 and m == 0):
    AL = [[] for _ in range(n)]
    for _ in range(m):
        u, v, w = list(map(int, input().split()))
        AL[u].append((v, w))
        AL[v].append((u, w))
    
    taken = [False] * n
    pq = []
    process(0, taken, AL, pq)
    nums_processed = mst_cost = 0
    edges = []

    while pq and nums_processed < n - 1:
        w, u, v = heappop(pq)
        if taken[u]: continue
        mst_cost += w
        nums_processed += 1
        edges.append((min(u, v), max(u, v)))
        process(u, taken, AL, pq)
        
    if nums_processed != n - 1:print("Impossible")
    else:
        edges.sort()
        print(mst_cost)
        for edge in edges: print(*edge)
    
    n, m = list(map(int, input().split()))