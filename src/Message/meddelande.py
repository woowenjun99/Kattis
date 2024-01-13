import sys

input = sys.stdin.readline
n, m = list(map(int, input().split()))
for _ in range(n):
    line = input().strip().replace(".", "")
    sys.stdout.write(line)
print()