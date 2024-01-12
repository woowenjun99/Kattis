"""
Topic: DFS + Graph Property

Store all the (src, dest) pair as key and the index as value
in the hashmap and perform DFS. However, we need to consider
when n == 2 and m == 1. The train can travel from City 1 to 2
and City 2 to 1 using the same track. Only in this case then
n != m.
"""
import sys

input = sys.stdin.readline
n, m = list(map(int, input().split()))

graph = {}
for i in range(1, m + 1):
    src, dest = list(map(int, input().split()))
    if abs(src - dest) == 1:
        smallest = min(src, dest)
        largest = max(src, dest)
        graph[(smallest, largest)] = i
    elif (src == 1 and dest == n) or (src == n and dest == 1):
        largest = src if src != 1 else dest
        smallest = 1
        graph[(largest, smallest)] = i

if n == 2 and m == 1:
    sys.stdout.write("1\n1\n")
    exit(0)

if len(graph) != n:
    sys.stdout.write("impossible\n")
    exit(0)

for i in range(1, n): sys.stdout.write(f"{graph[(i, i + 1)]}\n")
sys.stdout.write(f"{graph[(n, 1)]}\n")