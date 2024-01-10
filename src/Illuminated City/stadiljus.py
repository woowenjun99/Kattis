N = int(input())
x = int(input())
y = int(input())
L = sorted([int(z) * x for z in input().split()])
averages = [(z + 1) * y for z in range(len(L))]

sum = current = 0
while current < len(L):
    sum += L[current]
    if sum > averages[current]: break
    current += 1

print(current)