import sys
from heapq import heappush, heappop

input = sys.stdin.readline
n = int(input())
pq = []
for _ in range(n):
    line = input().split()
    if line[0].isnumeric(): heappush(pq, (int(line[0]) // 2, line[1]))
    else: heappush(pq, (int(line[1]), line[0]))

while pq: sys.stdout.write(f"{heappop(pq)[1]}\n")