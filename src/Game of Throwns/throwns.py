n, k = list(map(int, input().split()))
commands = input().strip().split()
pointer = current = 0
stack = []
while pointer < len(commands):
    if commands[pointer] != "undo":
        stack.append(int(commands[pointer]))
        current = (current + stack[-1]) % n
        pointer += 1
        continue
    for _ in range(int(commands[pointer + 1])): current = (current - stack.pop()) % n
    pointer += 2
print(current)