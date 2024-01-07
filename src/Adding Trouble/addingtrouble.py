text = input()
words = text.split(" ")
if int(words[2]) == int(words[1]) + int(words[0]):
    print("correct!")
else:
    print("wrong!")