n = int(input())

prices = sorted([int(input().split()[1]) for _ in range(n)], reverse=True)
total = 0
for i in range(0, len(prices), 2): total += prices[i]
print(total)