n, c, p = list(map(int, input().split()))
total = 0
for _ in range(n):
    jump = int(input())
    if jump > c + p:
        total += 1
        p, c = c, jump
print(total)