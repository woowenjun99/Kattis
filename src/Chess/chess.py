"""
Solution: Just perform BFS from the source since we know that thte diagonal
distance can be made in just 1 move.
"""
from collections import deque

for _ in range(int(input())):
    rs, cs, rd, cd = input().split()
    cs = int(cs)
    cd = int(cd)
    visited = [[False] * 8 for _ in range(8)]
    distances = [[float("inf")] * 8 for _ in range(8)]
    predecessor = [[-1] * 8 for _ in range(8)]
    distances[8 - cs][ord(rs) - ord("A")] = 0
    visited[8 - cs][ord(rs) - ord("A")] = True
    queue = deque([(ord(rs) - ord("A"), 8 - cs, 0)])
    
    while queue:
        row, column, step = queue.popleft()
        for i in range(1, 8):
            if column + i < 8 and row - i >= 0 and step + 1 < distances[column + i][row - i]:
                visited[column + i][row - i] = True
                distances[column + i][row - i] = step + 1
                predecessor[column + i][row - i] = (column, row)
                queue.append((row - i, column + i, step + 1))
            if column - i >= 0 and row - i >= 0 and step + 1 < distances[column - i][row - i]:
                visited[column - i][row - i] = True
                distances[column - i][row - i] = step + 1
                predecessor[column - i][row - i] = (column, row)
                queue.append((row - i, column - i, step + 1))
            if column + i < 8 and row + i < 8 and step + 1 < distances[column + i][row + i]:
                visited[column + i][row + i] = True
                distances[column + i][row + i] = step + 1
                predecessor[column + i][row + i] = (column, row)
                queue.append((row + i, column + i, step + 1))
            if column - i >= 0 and row + i < 8 and step + 1 < distances[column - i][row + i]:
                visited[column - i][row + i] = True
                distances[column - i][row + i] = step + 1
                predecessor[column - i][row + i] = (column, row)
                queue.append((row + i, column - i, step + 1))
                
    if not visited[8 - cd][ord(rd) - ord("A")]: 
        print("Impossible")
        continue

    start_row = ord(rd) - ord("A")
    start_col = 8 - cd
    stack = []
    while predecessor[start_col][start_row] != -1:
        stack.append((chr(start_row + ord("A")), 8 - start_col))
        start_col, start_row = predecessor[start_col][start_row]
    stack.append((rs, cs))
    print(len(stack) - 1, end=" ")
    for col, row in stack[::-1]: print(col, row, end=" ")
    print()
