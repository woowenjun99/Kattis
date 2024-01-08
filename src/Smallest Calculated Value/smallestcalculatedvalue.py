import sys

input = sys.stdin.readline
a, b, c = list(map(int, input().split()))
answers = set()

# Generate the results of the first four operations
answers.add(a + b)
answers.add(a - b)
answers.add(a * b)
if a % b == 0: answers.add(a // b)

minimum_so_far = float("inf")
for answer in answers:
    comparisons = [minimum_so_far]
    if answer + c >= 0: comparisons.append(answer + c)
    if answer - c >= 0: comparisons.append(answer - c)
    if answer * c >= 0: comparisons.append(answer * c)
    if answer % c == 0 and answer // c >= 0: comparisons.append(answer // c)
    minimum_so_far = min(comparisons)
print(minimum_so_far)