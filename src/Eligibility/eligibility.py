import sys

input = sys.stdin.readline
n = int(input())
for _ in range(n):
    line = list(input().strip().split())
    name, start, dob, courses = line
    sys.stdout.write(f"{name} ")
    if int(start.split("/")[0]) >= 2010 or int(dob.split("/")[0]) >= 1991:
        sys.stdout.write("eligible\n")
        continue

    if int(courses) > 40:
        sys.stdout.write("ineligible\n")
        continue

    sys.stdout.write("coach petitions\n")