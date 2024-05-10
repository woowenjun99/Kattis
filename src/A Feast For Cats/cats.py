from heapq import heappush, heappop

def process(u, taken, AL, pq):
    taken[u] = True
    for v, w in AL[u]:
        if taken[v]: continue
        heappush(pq, (w, v))
                                                    
for _ in range(int(input())):
    m, c = list(map(int, input().split()))
    AL = [[] for _ in range(c)]
    for _ in range((c * (c - 1)) // 2):
        i, j, d = list(map(int, input().split()))
        AL[i].append((j, d + 1))
        AL[j].append((i, d + 1))
        
    taken = [False] * c
    pq = []
    process(0, taken, AL, pq)
    mst_cost = num_taken = 0
    while pq and num_taken < c - 1:
        w, u = heappop(pq)
        if taken[u]: continue
        num_taken += 1
        mst_cost += w
        process(u, taken, AL, pq)

    if mst_cost <= m - 1: print("yes")
    else: print("no")