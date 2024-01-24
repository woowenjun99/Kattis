import sys
from collections import defaultdict
from math import dist

input = sys.stdin.readline

def check_rectangle(x, y, coords):
    return 1 if x >= coords[0] and x <= coords[2] and y >= coords[1] and y <= coords[3] else 0

def check_circle(x, y, coords):
    return 1 if dist([x, y], coords[0:2]) <= coords[2] else 0

m = int(input())
shapes = defaultdict(list)
for _ in range(m):
    line = input().strip().split()
    shapes[line[0]].append(list(map(int, line[1:])))

n = int(input())
for _ in range(n):
    total = 0
    x, y = list(map(int, input().split()))
    for key in shapes:
        for coords in shapes[key]:
            total += check_rectangle(x, y, coords) if key == "rectangle" else check_circle(x, y, coords)
    print(total)
