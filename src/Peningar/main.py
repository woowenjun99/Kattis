n, d = map(int, input().split())
monies = list(map(int, input().split()))
answer = index = 0
while monies[index]:
    answer += monies[index]
    monies[index] = 0
    index = (index + d) % n
print(answer)