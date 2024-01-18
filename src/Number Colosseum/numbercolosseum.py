import sys

input = sys.stdin.readline
n = int(input())
nums = list(map(int, input().split()))[::-1]
stack = []

while nums:
    new_competitor = nums.pop()

    if not stack or (stack[-1] > 0 and new_competitor > 0) or (stack[-1] < 0 and new_competitor < 0): 
        stack.append(new_competitor)
        continue

    should_continue = False
    while stack and (abs(stack[-1]) != abs(new_competitor)) and ((stack[-1] > 0 and new_competitor < 0) or (stack[-1] < 0 and new_competitor > 0)):
        if abs(stack[-1]) > abs(new_competitor):
            stack[-1] += new_competitor
            should_continue = True
            break

        new_competitor += stack[-1]
        stack.pop()

    # If the value in the stack wins
    if should_continue: continue

    # If they are tied
    if stack and abs(stack[-1]) == abs(new_competitor):
        if stack[-1] == new_competitor:
            stack.append(new_competitor)
            continue
        stack.pop()
        continue

    stack.append(new_competitor)

if not stack: 
    print("Tie!")
    exit(0)
if stack[0] < 0:
    print("Negatives win!")
    for num in stack: sys.stdout.write(f"{num} ")
    exit(0)
print("Positives win!")
for num in stack: sys.stdout.write(f"{num} ")