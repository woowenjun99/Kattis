n = input()
nums = list(map(int, input().split()))
total = 1
for i in range(1, len(nums)):
    if nums[i] > nums[i - 1]: total += 1
print(total)
