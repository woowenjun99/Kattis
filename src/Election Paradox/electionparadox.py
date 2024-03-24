n = int(input())
nums = sorted(map(int, input().split()), reverse=True)
total = 0
for i in range(n // 2): total += nums[i]
for i in range(n // 2, n): total += nums[i] // 2
print(total)