n, s = list(map(int, input().split()))
levels = [tuple(map(int, input().split())) for _ in range(n)]
for level in levels: 
    if level[0] <= s <= level[1]: s+= 1
print(s)