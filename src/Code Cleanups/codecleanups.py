from collections import deque

n = int(input())
days_pushed = deque(map(int, input().split()))

code_pushed = []
dirtiness = result = 0

for days_passed in range(1, 366):
    dirtiness = (days_passed * len(code_pushed)) - sum(code_pushed)

    if dirtiness >= 20:
        code_pushed = []
        result += 1
    if days_pushed and days_pushed[0] == days_passed: code_pushed.append(days_pushed.popleft())

# We should not have dirty code over midnight of new year so we need to do 1 more time if it is not cleared
if code_pushed: result += 1
print(result)