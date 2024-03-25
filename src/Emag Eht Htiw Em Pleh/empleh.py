# Grid generation logic
grid = [[None] * 8 for _ in range(8)]
for row in range(8):
    for column in range(8):
        if not row % 2:
            if not column % 2: grid[row][column] = "..."
            else: grid[row][column] = ":::"
        else:
            if not column % 2: grid[row][column] = ":::"
            else: grid[row][column] = "..."

white = input().removeprefix("White:").strip().split(",")
black = input().removeprefix("Black:").strip().split(",")
for piece in black:
    if not piece: continue
    if ord(piece[0]) >= ord("a") and ord(piece[0]) <= ord("z"):
        original = grid[8 - int(piece[1])][ord(piece[0]) - ord("a")]
        grid[8 - int(piece[1])][ord(piece[0]) - ord("a")] = original[0] + "p" + original[2]
        continue
    p = piece[0]
    if ord(piece[1]) >= ord("a") and ord(piece[2]) <= ord("z"):
        original = grid[8 - int(piece[2])][ord(piece[1]) - ord("a")]
        grid[8 - int(piece[2])][ord(piece[1]) - ord("a")] = original[0] + p.lower() + original[2]
        continue
        
for piece in white:
    if not piece: continue
    if ord(piece[0]) >= ord("a") and ord(piece[0]) <= ord("z"):
        original = grid[8 - int(piece[1])][ord(piece[0]) - ord("a")]
        grid[8 - int(piece[1])][ord(piece[0]) - ord("a")] = original[0] + "P" + original[2]
        continue
    p = piece[0]
    if ord(piece[1]) >= ord("a") and ord(piece[2]) <= ord("z"):
        original = grid[8 - int(piece[2])][ord(piece[1]) - ord("a")]
        grid[8 - int(piece[2])][ord(piece[1]) - ord("a")] = original[0] + p.upper() + original[2]
        continue
            
# Printing logic
BORDER = "+---+---+---+---+---+---+---+---+"
for row in range(8):
    print(BORDER)
    for column in range(8):
        print("|", end="")
        print(grid[row][column], end="")
    print("|")
print(BORDER)
