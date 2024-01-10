"""
Topic: Greedy + Sorting

Explanation:

We will drink the potion that can last the longest first because if we drink 
the shortest first, the effect will wear off. Notice that whether the potion
can last the whole game is dependent on the drinking time of the other potions.
This means that for potions[i], it will be dependent on (n - 1 - i) * t.

Time complexity: O(n log n)
Space complexity: O(n)
"""
import sys

input = sys.stdin.readline
n, t = list(map(int, input().split()))
potions = sorted([int(input()) for _ in range(n)], reverse=True)

# NOTE: potion[0] > (n - 1)t, potion[1] > (n - 2)t
for index, potion in enumerate(potions):
    if potion <= (len(potions) - index - 1) * t:
        sys.stdout.write("NO\n")
        exit(0)
sys.stdout.write("YES\n")