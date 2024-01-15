import sys

input = sys.stdin.readline
n = int(input())
appeared = set()
counted = 0
for _ in range(n):
    line = input()
    school = line.split()[0]
    if school in appeared: continue
    appeared.add(school)
    sys.stdout.write(line)
    counted += 1
    if counted == 12: exit(0)