from collections import Counter

n = int(input())
counter_a = Counter([input().strip() for _ in range(n)])
counter_b = Counter([input().strip() for _ in range(n)])
common_keys = set(counter_a.keys()).intersection(counter_b.keys())
count = 0
for key in common_keys: count += min(counter_a[key], counter_b[key])
print(count)