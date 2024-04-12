import sys

input = sys.stdin.readline
num_restaraunts = int(input())
queue = []

for _ in range(num_restaraunts):
    num_items = int(input())
    restaraunt = input().strip()
    valid = [False] * 2
    for _ in range(num_items):
        item = input().strip()
        if item == "pancakes": valid[0] = True
        if item == "pea soup": valid[1] = True

    if valid[0] and valid[1]: queue.append(restaraunt)

if len(queue) == 0: sys.stdout.write("Anywhere is fine I guess\n")
else: sys.stdout.write(f"{queue[0]}\n")