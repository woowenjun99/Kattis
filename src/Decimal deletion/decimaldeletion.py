from math import ceil, floor

n = float(input())
diff_from_ceil = ceil(n) - n
diff_from_floor = n - floor(n)
if diff_from_ceil < diff_from_floor: print(ceil(n))
else: print(floor(n))
