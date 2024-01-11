import sys

input = sys.stdin.readline
n = int(input())

total_vaccinated = 0
infection_in_control_group = [0, 0, 0]
infection_in_vaccinated_group = [0, 0, 0]

for _ in range(n):
    line = list(input().strip())
    if line[0] == "Y":
        total_vaccinated += 1
        for i in range(1, 4):
            infection_in_vaccinated_group[i - 1] += 1 if line[i] == "Y" else 0
    else:
        for i in range(1, 4):
            infection_in_control_group[i - 1] += 1 if line[i] == "Y" else 0

infection_in_control_group = [(100 * x) / (n - total_vaccinated) for x in infection_in_control_group]
infection_in_vaccinated_group = [(100 * x) / total_vaccinated for x in infection_in_vaccinated_group]

for control, vaccinated in zip(infection_in_control_group, infection_in_vaccinated_group):
    if vaccinated < control: print(100 - (vaccinated / control * 100))
    else: print("Not Effective")