import sys
from collections import defaultdict

lines = sys.stdin.readlines()
lines.pop()
pieces = ["K", "Q", "R", "B", "N", "P"]
black_pieces = defaultdict(list)
white_pieces = defaultdict(list)

for row in range(8):
    for col in range(8):
        if lines[1 + row * 2][2 + col * 4].upper() in pieces:
            if lines[1 + row * 2][2 + col * 4].islower():
                black_pieces[lines[1 + row * 2][2 + col * 4].upper()].append((row - 8, chr(col + ord("a"))))
            else:
                white_pieces[lines[1 + row * 2][2 + col * 4].upper()].append((8 - row, chr(col + ord("a"))))

to_print = "White: "
for piece in pieces:
    white_pieces[piece].sort()
    for r, c in white_pieces[piece]:
        if piece != "P": to_print += f"{piece}{c}{r},"
        else: to_print += f"{c}{r},"
if to_print.endswith(","): to_print = to_print.removesuffix(",")
print(to_print)
    
to_print = "Black: "
for piece in pieces:
    black_pieces[piece].sort()
    for r, c in black_pieces[piece]:
        if piece != "P": to_print += f"{piece}{c}{-r},"
        else: to_print += f"{c}{-r},"
if to_print.endswith(","): to_print = to_print.removesuffix(",")
print(to_print)