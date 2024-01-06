from heapq import heappush, heappop, heapify
import sys

input = sys.stdin.readline
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