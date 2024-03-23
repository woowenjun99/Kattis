time_remaining = 210
k = int(input()) - 1
for _ in range(int(input())):
    duration, status = input().strip().split()
    if time_remaining - int(duration) <= 0: 
        print(k + 1)
        exit(0)
    time_remaining -= int(duration)
    if status != "T": continue
    k = (k + 1) % 8
