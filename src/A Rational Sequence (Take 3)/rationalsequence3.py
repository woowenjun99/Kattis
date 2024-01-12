"""
Topics: Binary Heap + Queue

We capitalise on the property of PQ to determine whether
we are going left or right. If N % 2 == 0, this means we
should be going left. Otherwise, we should be going right.
This is true because the left child of the parent node is
i * 2 and the right child is i * 2 + 1. We append 
everything into a stack and simulate travelling down the 
tree. 

Time complexity is O(P log (N)) = ~31,000 operations
"""
import sys
from collections import deque

input = sys.stdin.readline
n = int(input())

for _ in range(n):
    index, num = list(map(int, input().split()))
    directions = deque()
    while num != 1:
        if num % 2 == 0: directions.appendleft("L")
        else: directions.appendleft("R")
        num //= 2
    
    p = q = 1
    while directions:
        direction = directions.popleft()
        if direction == "L": q += p
        else: p += q
    sys.stdout.write(f"{index} {p}/{q}\n")