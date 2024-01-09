import sys

input = sys.stdin.readline
n, s, m = list(map(int, input().split()))
s -= 1
board = list(map(int, input().split()))

number_of_hops = 0
visited = [False] * n
state = None

while True:
    if board[s] == m:
        state = "magic"
        break
    elif visited[s]:
        state = "cycle"
        break

    number_of_hops += 1
    visited[s] = True
    if board[s] > 0 and s + board[s] >= len(board):
        state = "right"
        break
    elif board[s] < 0 and s - abs(board[s]) < 0:
        state = "left"
        break
    s = s + board[s] if board[s] > 0 else s - abs(board[s])


sys.stdout.write(state + "\n")
sys.stdout.write(f"{number_of_hops}\n")