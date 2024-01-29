import sys; input = sys.stdin.readline
from math import floor
precints, districts = list(map(int, input().split()))
scores = {}
for _ in range(precints):
    d, a, b = list(map(int, input().split()))
    if d not in scores: scores[d] = [a, b]
    else: 
        scores[d][0] += a
        scores[d][1] += b
total = [0, 0]
V = 0
for i in range(1, districts + 1):
    if scores[i][0] > scores[i][1]: 
        sys.stdout.write("A ")
        sys.stdout.write(f"{scores[i][0] - floor(sum(scores[i]) / 2) - 1} ")
        sys.stdout.write(f"{scores[i][1]}")
        total[0] += scores[i][0] - floor(sum(scores[i]) / 2) - 1
        total[1] += scores[i][1]
    else: 
        sys.stdout.write("B ")
        sys.stdout.write(f"{scores[i][0]} ")
        sys.stdout.write(f"{scores[i][1] - floor(sum(scores[i]) / 2) - 1}")
        total[0] += scores[i][0]
        total[1] += scores[i][1] - floor(sum(scores[i]) / 2) - 1
    V += sum(scores[i])
    print()
print(f"{abs(total[0] - total[1]) / V}")
