n = int(input())
prizes = sum(list(map(int, input().split())))
if prizes % 3 == 0: print("yes")
else: print("no")