import sys
from collections import defaultdict

input = sys.stdin.readline

# Step 1: Build the graph
previous = input().strip()
n = int(input())
al = defaultdict(list)
for _ in range(n):
    animal = input().strip()
    al[animal[0]].append(animal)

# Step 2: Check whether there is an element that can end the opponent
starting_letter = previous[-1]
q = []
if not al[starting_letter]:
    sys.stdout.write("?\n")
else:
    for animal in al[starting_letter]:
        if not al[animal[-1]] or (animal[-1] == animal[0] and len(al[animal[-1]]) == 1):
            sys.stdout.write(f"{animal}!\n")
            exit(0)

        q.append(animal)
    sys.stdout.write(f"{q[0]}\n")