from math import ceil
s = int(input()); print(f"{s}:")
for i in range(2, ceil(s / 2) + 1):
    # Check i - 1
    to_add = i
    start = 0
    while start < s:
        start += to_add
        to_add = i if to_add == i - 1 else i - 1
    if start == s: print(f"{i},{i - 1}")

    # Check i
    if s % i == 0: print(f"{i},{i}")