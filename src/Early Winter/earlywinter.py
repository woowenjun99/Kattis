n, d = list(map(int, input().split()))
days = list(map(int, input().split()))
for index, day in enumerate(days):
    if day <= d:
        print(f"It hadn't snowed this early in {index} years!")
        exit(0)
print("It had never snowed this early!")