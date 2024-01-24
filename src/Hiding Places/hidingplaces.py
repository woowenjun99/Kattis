"""
Topic: Graph Traversal

The solution would be to perform BFS from the starting point.
BFS works because every jump from one square to another is 
only cost 1 and the knight would be able to reach every square.
Since there are only 64 squares, the time complexity would be
O(64) = O(1).
"""
from collections import deque
import sys

input = sys.stdin.readline
n = int(input())
for _ in range(n):
    chess_board = [[0] * 8 for _ in range(8)]
    visited = [[False] * 8 for _ in range(8)]
    location = list(input().strip())

    # In the format of [x, y]
    location = [ord(location[0]) - ord('a'), int(location[1]) - 1]
    visited[location[1]][location[0]] = True
    queue = deque([location])
    while queue:
        x, y = queue.popleft()
        # Move left logic
        if x - 2 >= 0 and y - 1 >= 0 and not visited[y - 1][x - 2]:
            chess_board[y - 1][x - 2] = chess_board[y][x] + 1
            visited[y - 1][x - 2] = True
            queue.append([x - 2, y - 1])
        
        if x - 2 >= 0 and y + 1 < 8 and not visited[y + 1][x - 2]:
            chess_board[y + 1][x - 2] = chess_board[y][x] + 1
            visited[y + 1][x - 2] = True
            queue.append([x - 2, y + 1])

        # Move up logic
        if x - 1 >= 0 and y - 2 >= 0 and not visited[y - 2][x - 1]:
            chess_board[y - 2][x - 1] = chess_board[y][x] + 1
            visited[y - 2][x - 1] = True
            queue.append([x - 1, y - 2])

        if x + 1 < 8 and y - 2 >= 0 and not visited[y - 2][x + 1]:
            chess_board[y - 2][x + 1] = chess_board[y][x] + 1
            visited[y - 2][x + 1] = True
            queue.append([x + 1, y - 2])
        
        # Move right logic
        if x < 6 and y >= 1 and not visited[y - 1][x + 2]:
            chess_board[y - 1][x + 2] = chess_board[y][x] + 1
            visited[y - 1][x + 2] = True
            queue.append([x + 2, y - 1])
        
        if x < 6 and y < 7 and not visited[y + 1][x + 2]:
            chess_board[y + 1][x + 2] = chess_board[y][x] + 1
            visited[y + 1][x + 2] = True
            queue.append([x + 2, y + 1])

        # Move down logic
        if x >= 1 and y < 6 and not visited[y + 2][x - 1]:
            chess_board[y + 2][x - 1] = chess_board[y][x] + 1
            visited[y + 2][x - 1] = True
            queue.append([x - 1, y + 2])

        if x < 7 and y < 6 and not visited[y + 2][x + 1]:
            chess_board[y + 2][x + 1] = chess_board[y][x] + 1
            visited[y + 2][x + 1] = True
            queue.append([x + 1, y + 2])
        
    # Find the max jumps and coordinates
    maximum_jump = 0
    coordinates = []
    for i in range(7, -1, -1):
        for j in range(8):
            if chess_board[i][j] > maximum_jump:
                maximum_jump = chess_board[i][j]
                coordinates = [[j, i]]
            elif chess_board[i][j] == maximum_jump:
                coordinates.append([j, i])
    
    sys.stdout.write(f"{maximum_jump} ")
    for coordinate in coordinates: sys.stdout.write(f"{chr(coordinate[0] + ord('a'))}{coordinate[1] + 1} ")
    print()