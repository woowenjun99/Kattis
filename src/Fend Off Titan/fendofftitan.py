import sys
from collections import defaultdict

input = sys.stdin.readline
n, m, x, y = list(map(int, input().split()))
x -= 1
y -= 1
graph = defaultdict(list)

# titans[i] and shamans[i] represent the number of titans and shamans on the node i
titans = [float("inf")] * n
shamans = [float("inf")] * n
distances = [float("inf")] * n
titans[x] = 0
shamans[x] = 0
distances[x] = 0

for _ in range(m):
    src, dest, weight, c = list(map(int, input().split()))
    src -= 1
    dest -= 1
    titan = shaman = 0
    if c == 2: titan += 1
    elif c == 1: shaman += 1
    graph[src].append([titan, shaman, weight, dest])
    graph[dest].append([titan, shaman, weight, src])

for i in range(n):
    for j in range(n):
        # We can skip immediately because we know that the route has not been explored.
        if titans[j] == float("inf"): continue
        for titan, shaman, distance, dest in graph[j]:
            if titans[j] + titan > titans[dest]: continue

            if titans[j] + titan < titans[dest]:
                titans[dest] = titans[j] + titan
                shamans[dest] = shamans[j] + shaman
                distances[dest] = distances[j] + distance
                continue

            if shamans[j] + shaman > shamans[dest]: continue

            if shamans[j] + shaman < shamans[dest]:
                titans[dest] = titans[j] + titan
                shamans[dest] = shamans[j] + shaman
                distances[dest] = distances[j] + distance
                continue

            if distances[j] + distance < distances[dest]:
                titans[dest] = titans[j] + titan
                shamans[dest] = shamans[j] + shaman
                distances[dest] = distances[j] + distance

if distances[y] == float("inf"):
    sys.stdout.write("IMPOSSIBLE\n")
else:
    sys.stdout.write(f"{distances[y]} {shamans[y]} {titans[y]}\n")