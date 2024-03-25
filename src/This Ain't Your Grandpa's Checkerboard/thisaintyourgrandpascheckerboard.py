n = int(input())
grid = [input().strip() for _ in range(n)]
for row in range(n):
    num_b = grid[row].count("B")
    num_w = grid[row].count("W")
    white_streak = grid[row].find("WWW")
    black_streak = grid[row].find("BBB")
    if num_b != num_w or white_streak != -1 or black_streak != -1:
        print(0)
        exit(0)
for column in range(n):
    num_b = num_w = 0
    for row in range(n):
        if grid[row][column] == "B": num_b += 1
        elif grid[row][column] == "W": num_w += 1
        if row >= 2:
            if grid[row][column] == grid[row - 1][column] == grid[row - 2][column]:
                print(0)
                exit(0)
    if num_b != num_w:
        print(0)
        exit(0)

print(1)