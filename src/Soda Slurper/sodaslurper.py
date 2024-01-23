e, f, c = list(map(int, input().split()))
bottles = e + f
total = 0
while bottles >= c:
    total += bottles // c
    bottles = bottles % c + bottles // c
print(total)