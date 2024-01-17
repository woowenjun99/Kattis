import sys
from collections import defaultdict

input = sys.stdin.readline
n = int(input())
while n != 0:
    graph = defaultdict(list)
    for _ in range(n):
        line = list(map(str, input().split()))
        for i in range(1, len(line)):
            graph[line[i]].append(line[0])

    keys = sorted(graph.keys())
    for key in keys:
        names = sorted(graph[key])
        sys.stdout.write(f"{key} ")
        for name in names: sys.stdout.write(f"{name} ")
        print()
    print()
    n = int(input())