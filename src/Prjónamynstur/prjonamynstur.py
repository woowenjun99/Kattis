import sys

input = sys.stdin.readline
recipe_book = {
    ".": 20,
    "O": 10,
    "/": 25,
    "A": 35,
    "^": 5,
    "v": 22
}

row, col = list(map(int, input().split()))
total_score = 0
for _ in range(row):
    for c in input().strip():
        total_score += recipe_book[c] if c in recipe_book else 25
sys.stdout.write(f"{total_score}\n")