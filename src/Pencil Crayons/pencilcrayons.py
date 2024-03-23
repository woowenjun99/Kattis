n, k = list(map(int, input().split()))
removed = 0
for _ in range(n): removed += k - len(set(input().split()))
print(removed)