vowels = ["A", "E", "I", "O", "U"]
letter = input().strip()
if letter == "Y":
    print("Kannski")
elif letter in vowels:
    print("Jebb")
else:
    print("Neibb")