from collections import defaultdict

mappers = defaultdict(int)
for _ in range(int(input())):
    name, score = input().strip().split()
    mappers[name] += int(score)
max_popularity = max(mappers.values())
for name in mappers:
    if mappers[name] == max_popularity: print(name)