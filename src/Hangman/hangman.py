import sys

input = sys.stdin.readline
word = input().strip()
permutation = input().strip()
letters_in_word = set(word)
wrong_guesses = correct_guesses = 0

for letter in permutation:
    if letter in letters_in_word:
        correct_guesses += 1
        if correct_guesses == len(letters_in_word):
            print("WIN")
            exit(0)
    else:
        wrong_guesses += 1
        if wrong_guesses == 10:
            print("LOSE")
            exit(0)