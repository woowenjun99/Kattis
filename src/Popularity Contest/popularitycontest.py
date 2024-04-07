n, m = list(map(int, input().split()))
scores = [-i for i in range(1, n + 1)]
for _ in range(m):
    a, b = list(map(int, input().split()))
    scores[a - 1] += 1
    scores[b - 1] += 1
for score in scores: print(score, end=" ")