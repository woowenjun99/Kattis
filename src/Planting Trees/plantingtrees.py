import sys

input = sys.stdin.readline
n = int(input())
trees = sorted(list(map(int, input().split())), reverse=True)
for i in range(len(trees)): trees[i] += i + 2
sys.stdout.write(f"{max(trees)}\n")