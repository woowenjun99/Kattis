first, second = input().strip().split()
first = list(first)
second = list(second)
for i in range(len(first)):
    if first[i] == "2": first[i] = "5"
    elif first[i] == "5": first[i] = "2"
first = first[::-1]

for i in range(len(second)):
    if second[i] == "2": second[i] = "5"
    elif second[i] == "5": second[i] = "2"
second = second[::-1]

if int("".join(first)) < int("".join(second)): print(2)
else: print(1)