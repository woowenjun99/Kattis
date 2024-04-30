from math import gcd

a, b, c = list(map(int, input().split()))
ratios = list(map(int, input().split()))
common_divisor = gcd(ratios[0], gcd(ratios[1], ratios[2]))
for i in range(len(ratios)): ratios[i] //= common_divisor
cups_made = min(a / ratios[0], b / ratios[1], c / ratios[2])
print(f"{a - cups_made * ratios[0]} {b - cups_made * ratios[1]} {c - cups_made * ratios[2]}")