import sys

input = sys.stdin.readlines

lines = [lines.strip() for lines in input()]
dictionary = {}
i = 0
while lines[i] != "":
    translation, foreign = lines[i].split()
    dictionary[foreign] = translation
    i += 1

for i in range(i + 1, len(lines)):
    if lines[i] in dictionary:
        sys.stdout.write(f"{dictionary[lines[i]]}\n")
    else:
        sys.stdout.write("eh\n")