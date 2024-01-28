"""
Topic: Math

a = x - 2h
b = y - 2h
Volume = (x - 2h)(y - 2h)h = (xy - 2hx - 2hy + 4h**2) * h
Maximise Volume = dV/dh = 0 ==> xy - 4hx - 4hy + 12h^2
h = (4x + 4y) - sqrt((4x + 4y) ^ 2 - (48 * x * y)) / 24
"""
from math import sqrt
t = int(input())
for _ in range(t):
    x, y = list(map(int, input().split()))
    h = ((4 * x + 4 * y) - sqrt((-4 * x + -4 * y) ** 2 - 48 * (x * y))) / 24
    print((x - 2 * h) * (y - 2 * h) * h)