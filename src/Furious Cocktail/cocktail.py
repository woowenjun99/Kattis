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