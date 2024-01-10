import sys
from heapq import heapify, heappop

input = sys.stdin.readline

n = int(input())
attendance = { input().strip(): 0 for _ in range(n) }
m = int(input())

pq = []
for _ in range(m):
    details = input().strip().split()
    for i in range(1, len(details)): attendance[details[i]] += 1

for key in attendance: pq.append([-attendance[key], key])
heapify(pq)
while pq:
    top = heappop(pq)
    sys.stdout.write(f"{-top[0]} {top[1]}\n")