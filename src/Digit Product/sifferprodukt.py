import sys
from math import prod

input = sys.stdin.readline
x = input().strip().replace("0", "")
while len(x) > 1:
    nums = [int(i) for i in x]
    total = prod(nums)
    x = str(total).replace("0", "")
print(x)