import sys

input = sys.stdin.readline
n = int(input())
in_building = set()
for _ in range(n):
    entries = input().strip().split()
    if entries[0] == "entry":
        sys.stdout.write(f"{entries[1]} entered")
        if entries[1] in in_building: sys.stdout.write(" (ANOMALY)")
        print()
        in_building.add(entries[1])
        continue
    sys.stdout.write(f"{entries[1]} exited")
    if entries[1] not in in_building: sys.stdout.write(" (ANOMALY)")
    print()
    if entries[1] in in_building: in_building.remove(entries[1])
