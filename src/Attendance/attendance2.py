num = int(input())
responses = [input().strip() for _ in range(num)]
absentees = []
for name in responses:
    if name == "Present!": absentees.pop()
    else: absentees.append(name)
if not absentees: 
    print("No Absences")
    exit(0)
for a in absentees: print(a)