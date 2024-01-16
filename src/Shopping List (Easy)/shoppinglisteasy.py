import sys
from collections import defaultdict

input = sys.stdin.readline
n, m = list(map(int, input().split()))
items = defaultdict(int)
for _ in range(n):
    shopping_list = list(map(str, input().split()))
    for item in shopping_list: 
        items[item] += 1

names = sorted(items.keys())
valid_names = []
for name in names: 
    if items[name] == 4: 
        valid_names.append(name)
sys.stdout.write(f"{len(valid_names)}\n")
for name in valid_names: sys.stdout.write(f"{name}\n")