n = int(input())
nums = list(map(int, input().split()))
stack = []
for num in nums:
    if not stack or num > stack[-1]:
        stack.append(num)
print(len(stack))
for num in stack: print(num, end=" ")