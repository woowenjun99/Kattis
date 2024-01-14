import sys

input = sys.stdin.readline
n = int(input())
total_g = 0
for _ in range(n):
    g, b = list(map(int, input().split()))
    total_g += g
    if total_g < b:
        sys.stdout.write("impossible\n")
        exit(0)
sys.stdout.write("possible\n")