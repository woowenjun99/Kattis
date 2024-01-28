from math import sqrt
nums = list(map(int, input().split()))
fence = nums[0:2]
x1, y1, x2, y2 = nums[2:]
x_nearest = max(x1, min(fence[0], x2))
y_nearest = max(y1, min(fence[1], y2))
print(x_nearest, y_nearest)
print(sqrt((fence[0] - x_nearest) ** 2 + (fence[1] - y_nearest) ** 2))