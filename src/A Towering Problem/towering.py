import sys

nums = list(map(int, sys.stdin.readline().split()))
height_of_first_tower = nums[-2]
height_of_second_tower = nums[-1]

response = []
nums = [nums[x] for x in range(0, 6)]
nums.sort(reverse=True)

for i in range(len(nums) - 2):
    left = i + 1
    right = len(nums) - 1

    while left < right:
        difference = height_of_first_tower - nums[i]
        if nums[left] + nums[right] == difference:
            response.append(nums[i])
            response.append(nums[left])
            response.append(nums[right])
            break
        elif nums[left] + nums[right] < difference:
            right -= 1
        else:
            left += 1

for i in range(len(nums) - 2):
    left = i + 1
    right = len(nums) - 1

    while left < right:
        difference = height_of_second_tower - nums[i]
        if nums[left] + nums[right] == difference:
            response.append(nums[i])
            response.append(nums[left])
            response.append(nums[right])
            break
        elif nums[left] + nums[right] < difference:
            right -= 1
        else:
            left += 1

for r in response: sys.stdout.write(f"{r} ")