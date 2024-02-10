"""
Topic: Math

The number of popcorns required in the first round is just
4 * sum of arithmetic progression where the first term is
n // 4. This is because for a 3 people group, there will be
2 + 1 matches. 

Since there are 4 groups, it will be  4 * (n // 4 * (n // 4 - 1)). 
For the remaining 4 matches, the number of popcorn is a constant 
because there can be only be 2 people in each group for semifinal 
and final.
"""

n = int(input())
print(4 * (n // 4 * (n // 4 - 1) // 2) + 4)