from collections import deque

moves = input().strip()
dq = deque()
for move in moves:
    dq.append(move)
    if len(dq) < 3: continue
    s = set(dq)
    if "L" in s and "B" in s and "R" in s:
        dq.clear()
        print("C", end="")
        continue

    front = dq.popleft()
    if front == "R": print("S", end="")
    elif front == "B": print("K", end="")
    else: print("H", end="")

while dq:
    front = dq.popleft()
    if front == "R": print("S", end="")
    elif front == "B": print("K", end="")
    else: print("H", end="")