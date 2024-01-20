"""
Topic: Geometry

Supposed that A1 is the area of the whole triangle, then points A2 + A3 + A4 = A1
if it is within the triangle.
"""
coordinates = [list(map(int, input().split())) for _ in range(3)]

def calculate_area(a, b, c):
    return abs(a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2

total_area = calculate_area(coordinates[0], coordinates[1], coordinates[2])
print(total_area)

n = int(input())
result = 0
for _ in range(n):
    x, y = list(map(int, input().split()))
    if calculate_area(coordinates[0], coordinates[1], [x, y]) + calculate_area(coordinates[1], coordinates[2], [x, y]) + calculate_area(coordinates[0], coordinates[2], [x, y]) == total_area:
        result += 1
print(result)