import sys

input = sys.stdin.readline
line = list(map(int, input().strip().split("/")))
if (line[0] >= 1 and line[0] <= 12) and (line[1] >= 1 and line[1] <= 12):
    sys.stdout.write("either\n")
elif line[1] >= 13:
    sys.stdout.write("US\n")
else:
    sys.stdout.write("EU\n")