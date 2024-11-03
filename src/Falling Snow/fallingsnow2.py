rows, cols = map(int, input().split())
grid = [list(input()) for _ in range(rows)]
answer = [["."] * cols for _ in range(rows)]
for col in range(cols):
    s_count = 0
    current_row = rows - 1
    for row in range(rows):
        if grid[row][col] == "S":
            answer[current_row][col] = "S"
            current_row -= 1
for row in answer: print("".join(row))
