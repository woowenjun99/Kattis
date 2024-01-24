n = int(input())
letters = [1, 0]
for _ in range(n): letters = [letters[1], letters[0] + letters[1]]
for letter in letters: print(f"{letter}", end=" ")