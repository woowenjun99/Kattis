import sys
from heapq import heapify, heappop, heappush
from math import prod, ceil

line = sys.stdin.readline().split()
N = int(line[0])
L = int(line[1])
P = float(line[2])

pq = []
for _ in range(N): 
    pq.append(1 / int(sys.stdin.readline()))

heapify(pq)

while L:
    c = ceil(L / N)
    heappush(pq, heappop(pq) ** P ** c); 
    L -= c

sys.stdout.write(f"{prod(pq)}\n")