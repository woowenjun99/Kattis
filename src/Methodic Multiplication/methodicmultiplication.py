import sys

input = sys.stdin.readline
x = input()
y = input()
total = x.count("S") * y.count("S")
for _ in range(total): sys.stdout.write("S(")
sys.stdout.write("0")
for _ in range(total): sys.stdout.write(")")