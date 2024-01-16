from collections import deque
n = int(input())
for i in range(1, n + 1):
    line = list(map(str, input().split()))
    numerator, denominator = list(map(int, line[1].split("/")))
    q = deque()
    while not (numerator == 1 and denominator == 1):
        if denominator > numerator:
            denominator -= numerator
            q.appendleft("L")
        else:
            numerator -= denominator
            q.appendleft("R")
    index = 1
    while q:
        front = q.popleft()
        if front == "L": index *= 2
        else: index = index * 2 + 1
    print(f"{i} {index}")