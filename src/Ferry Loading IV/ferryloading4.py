"""
Topic: Linked List

The answer is just to simulate the ferry via 2 queues on the left
and on the right.
"""
from collections import deque

t = int(input())
for _ in range(t):
    l, m = list(map(int, input().split()))
    l *= 100
    left = deque()
    right = deque()
    for _ in range(m):
        line = input().strip().split()
        if line[1] == "left": left.append(int(line[0]))
        else: right.append(int(line[0]))
    
    result = 0
    while left or right:
        capacity = 0
        while left and left[0] + capacity <= l:
            capacity += left[0]
            left.popleft()
        # If there are cars to send over or cars on the other side, we need to travel
        if capacity or right: result += 1

        capacity = 0
        while right and right[0] + capacity <= l:
            capacity += right[0]
            right.popleft()
        
        if capacity or left: result += 1
    print(result)