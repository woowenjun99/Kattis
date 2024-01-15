N = int(input())
parts = [0, 0, 0]

for i in range(N):
    presence = input().split()
    for (index, p) in enumerate(presence):
        if p == "J":
            parts[index] += 1

print(min(parts))