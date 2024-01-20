import sys

input = sys.stdin.readline
n, m, q = list(map(int, input().split()))
characters = {}

for i in range(1, n + 1):
    sentence = input().strip()
    characters[i] = list(sentence)

candidates = set()

# Initial setup
query = list(map(str, input().split()))
trait = int(query[0])
for key in characters:
    if characters[key][trait - 1] == query[1]:
        candidates.add(key)

for i in range(1, q):
    query = list(map(str, input().split()))
    trait = int(query[0])
    to_remove = []
    for candidate in candidates:
        if characters[candidate][trait - 1] != query[1]:
            to_remove.append(candidate)
    for tr in to_remove: candidates.remove(tr)

if len(candidates) == 1:
    print("unique")
    for candidate in candidates: print(candidate)
    exit(0)
print("ambiguous")
print(len(candidates))