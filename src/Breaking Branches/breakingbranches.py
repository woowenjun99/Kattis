import sys

input = sys.stdin.readline
n = int(input())

if n % 2 == 0:
    sys.stdout.write(f"Alice\n1\n")
else:
    sys.stdout.write(f"Bob")