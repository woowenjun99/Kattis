chess_board = [list(input().strip()) for _ in range(5)]
knights = 0
for row in range(5):
    for col in range(5):
        if chess_board[row][col] != "k": continue
        knights += 1
        if row - 2 >= 0 and col - 1 >= 0 and chess_board[row - 2][col - 1] == "k":
            print("invalid")
            exit(0)
        if row - 2 >= 0 and col + 1 < 5 and chess_board[row - 2][col + 1] == "k":
            print("invalid")
            exit(0)

        if row - 1 >= 0 and col - 2 >= 0 and chess_board[row - 1][col - 2] == "k":
            print("invalid")
            exit(0)
        if row - 1 >= 0 and col + 2 < 5 and chess_board[row - 1][col + 2] == "k":
            print("invalid")
            exit(0)

        if row + 2 < 5 and col - 1 >= 0 and chess_board[row + 2][col - 1] == "k":
            print("invalid")
            exit(0)
        if row + 2 < 5 and col + 1 < 5 and chess_board[row + 2][col + 1] == "k":
            print("invalid")
            exit(0)
        if row + 1 < 5 and col - 2 >= 0 and chess_board[row + 1][col - 2] == "k":
            print("invalid")
            exit(0)
        if row + 1 < 5 and col + 2 < 5 and chess_board[row + 1][col + 2] == "k":
            print("invalid")
            exit(0)

if knights == 9: print("valid")
else: print("invalid")