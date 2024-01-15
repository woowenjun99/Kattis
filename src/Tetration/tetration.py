import sys

input = sys.stdin.readline
n = float(input())
sys.stdout.write(f"{n ** (1 / n)}\n")