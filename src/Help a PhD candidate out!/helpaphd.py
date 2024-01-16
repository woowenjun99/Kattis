n = int(input())
for _ in range(n):
    line = input()
    if line == "P=NP": 
        print("skipped")
        continue
    print(sum(list(map(int, line.split("+")))))