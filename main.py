from heapq import heappush, heappop, heapify
from collections import defaultdict, Counter, deque
import sys, os, io

input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
h, c = list(map(int, input().split()))
pq = []
for _ in range(c):
    a, d = list(map(int, input().split()))
    pq.append([a + d, d])
heapify(pq)
for _ in range(h):
    a, d = heappop(pq)
    heappush(pq, [a + d, d])

pq = [p[0] - p[1] for p in pq]
sys.stdout.write(f"{max(pq)}\n")