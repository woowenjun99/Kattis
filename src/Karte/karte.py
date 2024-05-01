import sys
from collections import defaultdict

input = sys.stdin.readline
line = input().strip()
mappers = defaultdict(int)
appeared = set()

for i in range(0, len(line), 3):
    if (line[i], int(line[i + 1: i + 3])) in appeared:
        sys.stdout.write("GRESKA\n")
        exit(0)
    appeared.add((line[i], int(line[i + 1: i + 3])))
    mappers[line[i]] += 1

correct_keys = ["P", "K", "H", "T"]
for key in correct_keys: sys.stdout.write(f"{13 - mappers[key]} ")