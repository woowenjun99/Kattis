"""
Counter is very slow. However, since we are always recomputing the 
values of counter for x multiple times, we can cache it for future
use in a hashmap itself. Without caching, it will lead to TLE. With
caching, the run time is 3.99 seconds which is barely under 4 seconds.

To speed things up even more, we can use the sys library to input 
and output instead. This speeds things up even more by up to 0.50 seconds.
"""

from collections import Counter
import sys

input = sys.stdin.readline
lower, upper = list(map(int, input().split()))
results = []
cache = {}
for x in range(lower, upper + 1):
    digits_of_x = None
    if x not in cache: cache[x] = Counter(str(x))
    digits_of_x = cache[x]
    
    for y in range(x, upper + 1):
        digits_of_y = None
        if y not in cache: cache[y] = Counter(str(y))
        digits_of_y = cache[y]
        
        individual_digits = digits_of_x + digits_of_y
        product_digits = Counter(str(x * y))
        if individual_digits == product_digits: results.append([x, y, x * y])

sys.stdout.write(f"{len(results)} digit-preserving pair(s)\n")
for result in results: sys.stdout.write(f"x = {result[0]}, y = {result[1]}, xy = {result[2]}\n")