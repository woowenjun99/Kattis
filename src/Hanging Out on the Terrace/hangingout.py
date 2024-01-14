import sys

input = sys.stdin.readline
l, x = list(map(int, input().split()))
times = num_of_people = 0
for _ in range(x):
    instruction, people = input().split()
    if instruction == "leave": num_of_people -= int(people)
    else: 
        if num_of_people + int(people) > l: times += 1
        else: num_of_people += int(people)
sys.stdout.write(f"{times}\n")