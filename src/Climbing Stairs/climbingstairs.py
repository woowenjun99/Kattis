n, r, k = list(map(int, input().split()))
steps = k + abs(k - r)
current_level = r
is_up = True
while steps < n:
    steps += 1
    current_level += 1 if is_up else -1
    is_up = not is_up
if current_level != r: steps += 1
steps += r
print(steps)