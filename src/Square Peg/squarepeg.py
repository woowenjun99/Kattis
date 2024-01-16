l, r = list(map(int, input().split()))
if (2 * l ** 2) ** 0.5 <= 2 * r: print("fits")
else: print("nope")