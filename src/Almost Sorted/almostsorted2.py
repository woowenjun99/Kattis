import sys
input = sys.stdin.readline
n = int(input())
nums = list(map(int, input().split()))

sorted_nums = sorted(nums)

is_out_of_place = False
start = 0
for i in range(len(nums)):
    if nums[i] != sorted_nums[i]:
        start = i
        is_out_of_place = True
        break

if not is_out_of_place:
    print("Yes")
    exit(0)

end = len(nums) - 1
for i in range(len(nums) - 1, -1, -1):
    if nums[i] != sorted_nums[i]:
        end = i
        break

if start == end:
    print("No")
    exit(0)

# Try sorting
new_arr = nums[0:start] + nums[start: end + 1][::-1] + nums[end + 1:len(nums) + 1]
if new_arr == sorted_nums:
    print("Yes")
    exit(0)
print("No")