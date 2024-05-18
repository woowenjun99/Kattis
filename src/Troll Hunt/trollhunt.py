from math import floor

n, k, g = list(map(int, input().split()))
maximum_number_of_groups_formed = floor(k / g)
days = 0
while n > 0:
    if n == 1: break # We know for sure that we can find today
    n -= maximum_number_of_groups_formed
    days += 1
print(days)