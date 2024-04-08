y, p = input().strip().split()
if y.endswith("e"):
    print(y + "x" + p)
    exit(0)
elif y.endswith("a") or y.endswith("o") or y.endswith("i") or y.endswith("u"):
    print(y[0:len(y) - 1] + "ex" + p)
    exit(0)
elif y.endswith("ex"):
    print(y + p)
    exit(0)
print(y + "ex" + p)