from collections import defaultdict, deque

# O(E) to build the graph
vertex, edges = list(map(int, input().split()))
graph = defaultdict(list)
for _ in range(edges):
    src, dest = list(map(int, input().split()))
    graph[src - 1].append(dest - 1)

# O(E) to count the number of in_degrees
in_degree = [0] * vertex
for node in graph:
    for neighbour in graph[node]:
        in_degree[neighbour] += 1

# O(V) to count the number of in_degree
q = deque()
distances = [-1] * vertex
predecessor = [-1] * vertex
for index, value in enumerate(in_degree):
    if not value: q.append([index, 0])


while q:
    current, distance = q.popleft()
    for neighbour in graph[current]:
        in_degree[neighbour] -= 1
        if not in_degree[neighbour]:
            predecessor[neighbour] = current
            distances[neighbour] = distance + 1
            q.append([neighbour, distance + 1])

max_distance = max(distances)
max_index = distances.index(max_distance)
stack = []

while max_index != -1:
    stack.append(max_index + 1)
    max_index = predecessor[max_index]

print(len(stack))
while stack: 
    print(stack[-1], end=" ")
    stack.pop()