word = input().strip()
result = word.count("a") + word.count("e") + word.count("i") + word.count("o") + word.count("u")
print(result, end=" ")
print(result + word.count("y"))