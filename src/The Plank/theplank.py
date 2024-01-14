"""
Topic: Dynamic Programming (Coin Change 2)

1. Supposed that we have n = 4, we initialise an amount array that stores the
number of different ways we can piece together the wood of length i.

2. We initialise amount[0] as 1 because there is only 1 way to get length 0
which is to use no wood at all.

3. We notice that we need to look back to see the combination that we have 
previously calculated. The distance that we look back into is based on the 
plank calculated. Supposed that we have plank of length 2 and we are 
calculating for length 4, it would make sense that the result depends on
the result for length 4 - 2.
"""
import sys

input = sys.stdin.readline
n = int(input())

amount = [0] * (n + 1)
amount[0] = 1

planks = [1, 2, 3]
for a in range(1, n + 1):
    for plank in planks:
        if a - plank >= 0:
            amount[a] += amount[a - plank]

sys.stdout.write(f"{amount[-1]}\n")