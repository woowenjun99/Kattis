line = input().strip().split()
CONSTANT = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while line[0] != "0":
    rotation = int(line[0])
    line[1] = list(line[1][::-1])
    for index, letter in enumerate(line[1]):
        line[1][index] = CONSTANT[((CONSTANT.index(letter) + rotation) % 28)]
    print("".join(line[1]))
    line = input().strip().split()