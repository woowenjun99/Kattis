import sys

input = sys.stdin.readline
n, k, d = list(map(int, input().split()))
total = 0
for _ in range(n):
    friend = int(input())
    if friend + 14 <= k + d:
        total += 1
print(total)