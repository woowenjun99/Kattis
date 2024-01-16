import sys

input = sys.stdin.readline
n = int(input())
total_area = 0
data = []
for _ in range(n):
    line = list(map(float, input().split()))
    data.append([line[0], line[1]])
for i in range(n - 1):
    total_area += (data[i][1] + data[i + 1][1]) / 2 * (data[i + 1][0] - data[i][0])

sys.stdout.write(f"{total_area / 1000}\n")