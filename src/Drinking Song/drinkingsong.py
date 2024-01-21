n = int(input())
beverage = input().strip()
while n >= 3:
    print(f"{n} bottles of {beverage} on the wall, {n} bottles of {beverage}.")
    print(f"Take one down, pass it around, {n - 1} bottles of {beverage} on the wall.")
    print()
    n -= 1

if n == 2:
    print(f"2 bottles of {beverage} on the wall, 2 bottles of {beverage}.")
    print(f"Take one down, pass it around, 1 bottle of {beverage} on the wall.\n")

print(f"1 bottle of {beverage} on the wall, 1 bottle of {beverage}.")
print(f"Take it down, pass it around, no more bottles of {beverage}.")