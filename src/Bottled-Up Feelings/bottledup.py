from math import floor

s, v1, v2 = list(map(int, input().split()))
v1_used = floor(s / v1) # Maximum possible v1
v2_used = 0
while v1_used >= 0 and v2_used <= floor(s / v2):
    if v1_used * v1 + v2_used * v2 == s: break
    elif v1_used * v1 + v2_used * v2 > s: v1_used -= 1
    else: v2_used += 1

if v1_used * v1 + v2_used * v2 != s: print("Impossible")
else: print(f"{v1_used} {v2_used}")