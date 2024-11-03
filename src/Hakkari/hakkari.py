rows, cols = map(int, input().split())
grid = [input() for _ in range(rows)]
to_print = []
for row in range(rows):
    for col in range(cols):
        if grid[row][col] == "*":
            to_print.append(f"{row + 1} {col + 1}")
print(len(to_print))
for row in to_print: print(row)