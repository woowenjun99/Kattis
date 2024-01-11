import sys

input = sys.stdin.readline
n = input()
words = input().split()

for word in words:
    if word[0].isupper():
        sys.stdout.write(word[0])
