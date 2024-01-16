from math import floor
n, p, x, y = list(map(int, input().split()))
number_of_cycles = floor(p / (n - 1))
total_time = number_of_cycles * ((n - 1) * x + y) + (p % (n - 1)) * x
print(total_time)