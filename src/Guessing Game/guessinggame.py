import sys
from collections import deque, defaultdict

# Process input
lines = sys.stdin.readlines()
lines.pop()
test_cases = [[]]
for line in lines:
    test_cases[-1].append(line.strip())
    if line.strip() == "right on": test_cases.append([])
test_cases.pop()

# Try to play the game
for tc in test_cases:
    tc = deque(tc)
    is_valid = True
    possible_range = [1, 10]
    used = defaultdict(str)
    while tc:
        value = int(tc.popleft())
        status = tc.popleft()
        if status == "right on":
            if value >= possible_range[0] and value <= possible_range[1] and is_valid and value not in used: print("Stan may be honest")
            else: print("Stan is dishonest")
            possible_range = [1, 10]
            is_valid = True
            used = {}
            continue
        elif status == "too high":
            if value < possible_range[0] or (value in used and used[value] != "too high"): 
                is_valid = False
                continue
            used[value] = "too high"
            possible_range[1] = min(value, possible_range[1])
        else:
            if value > possible_range[1] or (value in used and used[value] != "too low"): 
                is_valid = False
                continue
            used[value] = "too low"
            possible_range[0] = max(possible_range[0], value)