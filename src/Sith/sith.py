name = input()
a = int(input())
b = int(input())
c = int(input())

if a - b == c and c < 0: 
    print("JEDI")
elif abs(a - b) == c and a - b < 0:
    print("SITH")
else: 
    print("VEIT EKKI")
