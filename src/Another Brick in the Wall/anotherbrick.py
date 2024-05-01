h, w, n = list(map(int, input().split()))
bricks = list(map(int, input().split()))
current_width = current_height = 0
for brick in bricks:
    if current_width + brick > w:
        print("NO")
        exit(0)
    current_width += brick
    if current_width == w:
        current_height += 1
        current_width = 0
        if current_height == h:
            print("YES")
            exit(0)
if current_height == h: print("YES")
else: print("NO")