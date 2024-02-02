"""
Topic: Backtracking

The solution would be to generate all possible combinations of the symbols and
derive the values computed from it. Note that for 4 values of 4, we will only
use 3 symbols. This means that there is a total of 4 * 4 * 4 = 64 combinations.
Time complexity is O(1).

The next part is slightly tricky. We need to evaluate the result from every 
combination. Since BODMAS applies, we need to evaluate the multiplication and
division first. We also need to cache the + and - that appears. Only after
evaluating multiplication and division then can we evaluate + and -. The time
complexity of this is O(1).

Finally, if the value does not appear in memo, we add it in. We can skip the
combination if it exists because we can return any value.
"""
combinations = []
def generate_combinations(index=0, res=[]):
    symbols = ["*", "/", "+", "-"]
    if len(res) == 3:
        combinations.append(res.copy())
        return
    
    for i in range(4):
        res.append(symbols[i])
        generate_combinations(i + 1, res)
        res.pop()
generate_combinations()

memo = {}
def compute_result(combination):
    s = [4]
    sym = []
    for i in range(3):
        if combination[i] == "+" or combination[i] == "-": 
            s.append(4)
            sym.append(combination[i])
        elif combination[i] == "*": s[-1] *= 4
        else: s[-1] = int(s[-1] / 4)

    for i, v in enumerate(sym):
        if v == "+": s[0] += s[i + 1]
        else: s[0] -= s[i + 1]

    if s[0] not in memo: memo[s[0]] = combination

for combination in combinations: compute_result(combination)

n = int(input())
for _ in range(n):
    solution = int(input())
    if solution not in memo:
        print("no solution")
        continue
    for index, value in enumerate(memo[solution]): print(f"4 {value} ", end="")
    print(f"4 = {solution}")