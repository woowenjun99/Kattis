n = int(input())
meats = set()
for _ in range(n):
    meat = input().strip()
    meats.add(meat)
    
if len(meats) == 2: print("blandad best")
else: print(meats.pop())