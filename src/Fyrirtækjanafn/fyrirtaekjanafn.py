import sys
input = sys.stdin.readline
word = input().strip()
for letter in word:
    if letter.lower() in set(["a", "e", "i", "o", "u", "y"]):
        sys.stdout.write(letter)