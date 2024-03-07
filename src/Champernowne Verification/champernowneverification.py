num = input()
k = 1
built = ""
while len(built) < len(num):
    built += str(k)
    if built == num: 
        print(k)
        exit(0)
    k += 1
print(-1)