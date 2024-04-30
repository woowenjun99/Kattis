import sys
from math import floor

total_cost = total_shares = 0
for line in sys.stdin.readlines():
    line = line.strip().split()
    command = line[0]
    if command == "buy":
        amount, cost = int(line[1]), int(line[2])
        total_shares += amount
        total_cost += cost * amount
    elif command == "sell":
        amount, cost = int(line[1]), int(line[2])
        if total_shares == 0: continue
        total_cost -= (total_cost / total_shares) * amount
        total_shares -= amount
    elif command == "split":
        amount = int(line[1])
        total_shares *= amount
    elif command == "merge":
        amount = int(line[1])
        if total_shares == 0: continue
        total_cost = total_cost / total_shares * amount * floor(total_shares / amount)
        total_shares = floor(total_shares / amount)
    else:
        amount = int(line[1])
        actual_sales = amount * total_shares
        print(actual_sales - 0.3 * max(actual_sales - total_cost, 0))
