from collections import defaultdict, deque

n, m = list(map(int, input().split()))
target_languages = input().strip().split()
graph = defaultdict(list)
for _ in range(m):
    source, destination, weight = input().strip().split()
    graph[source].append([destination, int(weight)])
    graph[destination].append([source, int(weight)])
    
distances = { "English": 0 }
costs = { "English": 0 }
queue = deque([["English", 0]])
while queue:
    source, step = queue.popleft()
    for neighbour, money in graph[source]:
        if neighbour not in distances:
            distances[neighbour] = step + 1
            queue.append([neighbour, step + 1])
            costs[neighbour] = money
            continue
        if step + 1 > distances[neighbour]: continue
        if money < costs[neighbour]: costs[neighbour] = money

total_cost = 0
for target_language in target_languages:
    if target_language not in costs or costs[target_language] == float("inf"):
        print("Impossible")
        exit(0)
    total_cost += costs[target_language]
print(total_cost)