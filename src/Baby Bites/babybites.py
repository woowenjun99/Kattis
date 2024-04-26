n = int(input())
words = input().strip().split()
for index, word in enumerate(words):
    if word.isnumeric() and int(word) - 1 != index:
        print("something is fishy")
        exit(0)
print("makes sense")