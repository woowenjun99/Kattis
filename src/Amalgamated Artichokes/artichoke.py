# Very similar to best time to buy and sell stocks on leetcode
from math import sin, cos

p, a, b, c, d, n = list(map(int, input().split()))
prices = []
for k in range(1, n + 1): prices.append(p * (sin(a * k + b) + cos(c * k + d) + 2))

max_so_far = left = 0
right = 1
while left < len(prices) and right < len(prices):
    if prices[left] - prices[right] > 0:
        max_so_far = max(max_so_far, prices[left] - prices[right])
        right += 1
        continue
    left = right
    right = left + 1
print(max_so_far)