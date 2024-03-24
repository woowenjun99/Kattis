"""
Notice that for the initial column, we can put anywhere so that are 
r options. In the 2nd column, there is r - 1 option because we cannot
put in the same row as the 1st column. However, third column onwards, we
can put in same row as 1st column.
"""
r, c = list(map(int, input().split()))
total = r
for i in range(1, c): total *= r - 1
print(total % 998244353)