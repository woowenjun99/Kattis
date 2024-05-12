from collections import deque

f, s, g, u, d = list(map(int, input().split()))
distances = [float("inf") for _ in range(f)]
queue = deque([s - 1])
distances[s - 1] = 0
while queue:
    current_floor = queue.popleft()
    if current_floor + u < f and distances[current_floor] + 1 < distances[current_floor + u]:
        distances[current_floor + u] = distances[current_floor] + 1
        queue.append(current_floor + u)
    if current_floor - d >= 0 and distances[current_floor] + 1 < distances[current_floor - d]:
        distances[current_floor - d] = distances[current_floor] + 1
        queue.append(current_floor - d)

if distances[g - 1] == float("inf"): print("use the stairs")
else: print(distances[g - 1])