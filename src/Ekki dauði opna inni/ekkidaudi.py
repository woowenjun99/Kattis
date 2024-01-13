import sys

sentence_one = input().strip().split("|")
sentence_two = input().strip().split("|")
sys.stdout.write(f"{sentence_one[0]}{sentence_two[0]} {sentence_one[1]}{sentence_two[1]}\n")