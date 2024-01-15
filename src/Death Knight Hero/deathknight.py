import sys

input = sys.stdin.readline
n = int(input())
score = 0
for _ in range(n):
    line = input()
    score += 1 if line.find("CD") == -1 else 0
sys.stdout.write(f"{score}\n")