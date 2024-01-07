from math import ceil
from collections import deque
import sys

input = sys.stdin.readline
n, k = list(map(int, input().strip().split()))
q = deque()

# Base case: We need at least 1 server to process 1 request.
min_server_needed = 1

for _ in range(n):
    arrival = int(input().strip())
    while q and q[0] <= arrival: q.popleft()
    q.append(arrival + 1000)
    min_server_needed = max(min_server_needed, ceil(len(q) / k))

print(min_server_needed)
