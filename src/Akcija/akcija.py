import sys

input = sys.stdin.readline
n = int(input())
books = sorted([int(input()) for _ in range(n)], reverse=True)
price = 0
for i in range(1, len(books) + 1): 
    if i % 3 == 0: continue
    price += books[i - 1]
print(price)