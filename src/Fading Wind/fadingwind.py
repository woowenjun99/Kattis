import sys
from math import floor

input = sys.stdin.readline
h, k, v, s = list(map(int, input().split()))
distance_travelled = 0
while h:
    v += s 
    v -= max(1, floor(v / 10))
    if v >= k: h += 1
    elif v > 0 and v < k:
        h -= 1
        if not h: v = 0
    else:
        h = 0
        v = 0
    
    distance_travelled += v
    if s > 0: s-= 1
sys.stdout.write(f"{distance_travelled}\n")