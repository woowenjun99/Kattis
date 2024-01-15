import sys

input = sys.stdin.readline
n = input()
days = list(map(int, input().split()))
sys.stdout.write(f"{days.index(min(days))}\n")