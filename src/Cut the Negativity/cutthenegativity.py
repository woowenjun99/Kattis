"""
Topic: Array

Explanation:

Simple graph traversal through the column then the row,
then print the row and column whereby the value is not
-1.

Time complexity: O(n^2)
Space complexity: O(n) because we need to print the 
length of the values to print.
"""
import sys

input = sys.stdin.readline
n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]

values_to_print = []
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if graph[i - 1][j - 1] != -1:
            values_to_print.append([i, j, graph[i - 1][j - 1]])

sys.stdout.write(f"{len(values_to_print)}\n")
for value in values_to_print:
    sys.stdout.write(f"{value[0]} {value[1]} {value[2]}\n")