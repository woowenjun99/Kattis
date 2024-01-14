grid = [list(input().strip()) for _ in range(3)]

for i in range(3):
    max_in_a_row = max_in_a_col = 0
    for j in range(3):
        if grid[i][j] == "O": max_in_a_row += 1
        if grid[j][i] == "O": max_in_a_col += 1
    if max_in_a_col == 3 or max_in_a_row == 3:
        print("Jebb")
        exit(0)

if grid[1][1] == "O" and ((grid[0][0] == "O" and grid[2][2] == "O") or (grid[2][0] == "O" and grid[0][2] == "O")):
    print("Jebb")
    exit(0)

print("Neibb")