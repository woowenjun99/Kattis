from math import floor
n = int(input())
fastest = previous_time = previous_speed = 0
for _ in range(n):
    time, speed = list(map(int, input().split()))
    if time: fastest = max(fastest, (speed - previous_speed) / (time - previous_time))
    previous_speed = speed
    previous_time = time
print(floor(fastest))