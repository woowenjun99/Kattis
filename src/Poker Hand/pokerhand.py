import sys; input = sys.stdin.readline
from collections import defaultdict

mappers = defaultdict(int)
line = list(map(str, input().split()))
for i in range(5): mappers[line[i][0]] += 1
maximum = max(mappers.values())
sys.stdout.write(f"{maximum}\n")