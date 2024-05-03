import sys
from collections import deque

# Process input
lines = sys.stdin.readlines()
lines.pop()
test_cases = []
for line in lines:
    if len(line.split()) == 2:
        test_cases.append([line.strip()])
        continue
    test_cases[-1].append(line.strip())

# Play the game
for tc in test_cases:
    tc = deque(tc)
    n, k = list(map(int, tc.popleft().split()))
    wins = [0] * n
    losses = [0] * n
    while tc:
        p1, m1, p2, m2 = tc.popleft().split()
        if m1 == "scissors" and m2 == "paper":
            wins[int(p1) - 1] += 1
            losses[int(p2) - 1] += 1
        elif m1 == "scissors" and m2 == "rock":
            wins[int(p2) - 1] += 1
            losses[int(p1) - 1] += 1
        elif m1 == "paper" and m2 == "rock":
            wins[int(p1) - 1] += 1
            losses[int(p2) - 1] += 1
        elif m1 == "paper" and m2 == "scissors":
            wins[int(p2) - 1] += 1
            losses[int(p1) - 1] += 1
        elif m1 == "rock" and m2 == "scissors":
            wins[int(p1) - 1] += 1
            losses[int(p2) - 1] += 1
        elif m1 == "rock" and m2 == "paper":
            wins[int(p2) - 1] += 1
            losses[int(p1) - 1] += 1
    for i in range(n):
        if wins[i] + losses[i] == 0: 
            print("-")
            continue
        result = wins[i] / (wins[i] + losses[i])
        print("{:.3f}".format(result))
    print()