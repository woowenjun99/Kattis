import sys

input = sys.stdin.readline
statues = int(input())
days = printers = 1
while statues > printers:
    printers *= 2
    days += 1
print(days)