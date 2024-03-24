row, col = list(map(int, input().split()))
grid = [list(input().strip()) for _ in range(row)]
words = []
for r in range(row):
    new_word = ""
    for c in range(col):
        if grid[r][c] == "#":
            if len(new_word) >= 2: words.append(new_word)
            new_word = ""
            continue
        new_word += grid[r][c]
    if len(new_word) >= 2: words.append(new_word)

for c in range(col):
    new_word = ""
    for r in range(row):
        if grid[r][c] == "#":
            if len(new_word) >= 2: words.append(new_word)
            new_word = ""
            continue
        new_word += grid[r][c]
    if len(new_word) >= 2: words.append(new_word)      

print(sorted(words)[0])