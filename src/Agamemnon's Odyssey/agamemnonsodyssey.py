from collections import defaultdict, deque

n, k = list(map(int, input().split()))
graph = defaultdict(list)
total = 0
for _ in range(n - 1):
    u, v, w = list(map(int, input().split()))
    graph[u].append((v, w))
    graph[v].append((u, w))
    total += w

if k >= 2: 
    print(total)
    exit(0)
    
def bfs(node):
    queue = deque([(node, 0)])
    furthest_node = (node, 0)
    processed = [False] * n
    processed[node - 1] = True
    while queue:
        front, dist = queue.popleft()
        if dist > furthest_node[1]: furthest_node = (front, dist)
        for v, w in graph[front]:
            if not processed[v - 1]:
                processed[v - 1] = True
                queue.append((v, w + dist))
    return furthest_node

print(bfs(bfs(1)[0])[1])
