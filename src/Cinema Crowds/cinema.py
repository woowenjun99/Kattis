import sys

input = sys.stdin.readline
n, m = list(map(int, input().split()))
groups = list(map(int, input().split()))

total_size = 0
admitted = 0
for group in groups:
    if total_size + group <= n:
        total_size += group
        admitted += 1

sys.stdout.write(f"{m - admitted}\n")