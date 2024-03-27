import sys

rows = sys.stdin.readlines()
for index, row in enumerate(rows):
    nums = list(map(int, row.split()[1:]))
    minimum = min(nums)
    maximum = max(nums)
    print(f"Case {index + 1}: {minimum} {maximum} {maximum - minimum}")