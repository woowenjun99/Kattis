n = int(input())
row = "+" + n * "-" + "+"
print(row)
for i in range(n):
    row = "|" + n * " " + "|"
    print(row)
row = "+" + n * "-" + "+"
print(row)