"""
Topic: Sorting + Hashtable
"""
import sys

input = sys.stdin.readline
n = int(input())
while n != 0:
    # Get the order for the first list.
    list_one = [int(input()) for _ in range(n)]
    sorted_list_one = sorted(list_one)
    mappers = {}
    for index, value in enumerate(sorted_list_one): mappers[value] = index
    correspondance = []
    for num in list_one: correspondance.append(mappers[num])

    list_two = sorted([int(input()) for _ in range(n)])
    for i in correspondance: sys.stdout.write(f"{list_two[i]}\n")
    sys.stdout.write("\n")
    n = int(input())