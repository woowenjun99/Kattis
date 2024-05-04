"""
Topic: Binary Search, Math

NOTE: For every iteration of binary search, we are able
to cover 2^k elements. Therefore, we just need to check
if 2^k >= N to cover all the elements
"""
n, k = list(map(int, input().split()))
if 2 ** k >= n: print("Your wish is granted!")
else: print("You will become a flying monkey!")