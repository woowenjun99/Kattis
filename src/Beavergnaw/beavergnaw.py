from math import pi

D, V = list(map(int, input().split()))
while D or V:
    d = (D ** 3 - 6 * V / pi) ** (1/3)
    print(d)
    D, V = list(map(int, input().split()))
