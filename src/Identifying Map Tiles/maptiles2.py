"""
Topic: Binary Search

We notice that based on the current number, we know which region
on the map we will be, so we can zoom into it. Notice that there
are 4 regions split equally. This resembles width = [LB, UB] and
height = [LB, UB] and we can perform binary search to get the
final coordinates.
"""
import sys

input = sys.stdin.readline
n = input().strip()
sys.stdout.write(f"{len(n)} ")

x = 1 if n[0] == "0" or n[0] == "2" else 2
y = 1 if n[0] == "0" or n[0] == "1" else 2

length = [1, 2 ** len(n)]
width = [1, 2 ** len(n)]

for number in n:
    middle_length = sum(length) // 2
    middle_width = sum(width) // 2
    if number == "0":
        width[1] = middle_width
        length[1] = middle_length
    elif number == "1":
        width[1] = middle_width 
        length[0] = middle_length + 1
    elif number == "2":
        width[0] = middle_width + 1
        length[1] = middle_length
    else:
        width[0] = middle_width + 1
        length[0] = middle_length + 1

sys.stdout.write(f"{length[0] - 1} {width[0] - 1}\n")