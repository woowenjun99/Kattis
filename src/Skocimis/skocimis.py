"""
Topic: Logic

The largest number of jumps is determined by the larger of the difference
between the initial gap of b and a as well as c and b. This is because to
maximise the number of jumps, a can jump to b + 1 and b can jump to a + 2...
"""
a, b, c = list(map(int, input().split()))
print(max(b - a - 1, c - b - 1))