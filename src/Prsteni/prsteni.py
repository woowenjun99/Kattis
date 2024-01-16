from math import gcd, floor
n = int(input())
wheels = list(map(int, input().split()))
for i in range(1, len(wheels)):
    divisor = gcd(wheels[0], wheels[i])
    print(f"{floor(wheels[0] / divisor)}/{floor(wheels[i]/divisor)}")