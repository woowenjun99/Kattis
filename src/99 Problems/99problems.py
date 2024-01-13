"""
Topic: Math

Notice that the value of N is from 0 to 10000
and that the 99-pattern is 99, 199, 299... This
means that we only need to increment until 9999
which is 99 iterations.
"""
n = int(input())
smallest_so_far = float("inf")
value = 0

for i in range(100):
   difference = abs(n - (100 * i + 99))
   if difference <= smallest_so_far:
      smallest_so_far = difference
      value = 100 * i + 99

print(value)
