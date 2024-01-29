n, lph = list(map(int, input().split()))
locs = sorted([int(input()) for _ in range(n)])
total = questions = 0
for index, loc in enumerate(locs):
    if total + loc <= 5 * lph:
        total += loc
        questions += 1
print(questions)