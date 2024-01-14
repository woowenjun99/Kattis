import sys

input = sys.stdin.readline
n = int(input())
temperatures = list(map(int, input().split()))
print(sum(temperatures) // len(temperatures))