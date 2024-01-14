import sys

input = sys.stdin.readline
line = list(map(int, input().split()))
total = 0
for i in range(0, len(line), 2): total += line[i] * line[i + 1]
average = total // 5

n, kwf = list(map(int, input().split()))
sys.stdout.write(f"{(average * n) // kwf}\n")