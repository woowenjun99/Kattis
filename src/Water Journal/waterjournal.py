n, a, b = list(map(int, input().split()))
volumes = sorted([int(input()) for _ in range(n - 1)])
if volumes[0] > a and volumes[-1] < b: print(-1)
elif volumes[0] > a: print(a)
elif volumes[-1] < b: print(b)
else:    
    for i in range(a, b + 1): print(i)