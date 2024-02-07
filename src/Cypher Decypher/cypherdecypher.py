multiplier = list(map(int, list(input())))
original = {}
for i in range(26): original[chr(ord("A") + i)] = i

n = int(input())
for _ in range(n):
    word = input().strip()
    for index, letter in enumerate(word):
        new_pos = original[letter] * multiplier[index]
        while new_pos > 25: new_pos -= 26
        print(f"{chr(ord('A') + new_pos)}", end="")
    print()