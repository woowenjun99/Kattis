from collections import defaultdict

n, q = list(map(int, input().split()))
names = defaultdict(list)
for _ in range(n):
    name = input().strip()
    initials = name.split()
    names[initials[0][0] + initials[1][0]].append(name)
for _ in range(q):
    query = input().strip()
    if len(names[query]) == 0: print("nobody")
    elif len(names[query]) == 1: print(names[query][0])
    else: print("ambiguous")