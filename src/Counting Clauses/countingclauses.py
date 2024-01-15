import sys

input = sys.stdin.readline
m, n = list(map(int, input().split()))

if m < 8: 
    print("unsatisfactory")
    exit(0)

print("satisfactory")
