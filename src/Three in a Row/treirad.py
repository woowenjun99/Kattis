N = int(input())

start = N ** (1//3)

while True:
    if start * (start + 1) * (start + 2) >= N:
        break
    start += 1

print(start - 1)