n = int(input())
nums = sorted(map(int, input().split()), reverse=True)
stones = [0, 0]
for i, v in enumerate(nums): stones[i % 2] += v
print(f"{stones[0]} {stones[1]}")