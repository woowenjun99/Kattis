from collections import deque, defaultdict

graph = defaultdict(list)
n, m = list(map(int, input().split()))
in_degrees = [0] * n
for _ in range(m):
    a, b = list(map(int, input().split()))
    graph[a].append(b)
    in_degrees[b - 1] += 1

nodes_processed = 0
queue = deque()
toposort = []
for index, value in enumerate(in_degrees):
    if value == 0: queue.append(index + 1)

while queue:
    front = queue.popleft()
    nodes_processed += 1
    toposort.append(front)
    for neighbour in graph[front]:
        in_degrees[neighbour - 1] -= 1
        if not in_degrees[neighbour - 1]:
            queue.append(neighbour)

if nodes_processed != n: print("IMPOSSIBLE")
else: 
    for i in range(len(toposort)):
        print(toposort[i]) 