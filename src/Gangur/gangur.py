hallway = input()

sum = 0
number_of_left = 0
for i in range(len(hallway) - 1, -1, -1):
    if hallway[i] == ">": 
        sum += number_of_left
    elif hallway[i] == "<":
        number_of_left += 1

print(sum)