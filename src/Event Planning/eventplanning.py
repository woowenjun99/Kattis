n, b, h, w = list(map(int, input().split()))

# Sort the hotels by price from lowest to highest
hotels = []
for i in range(h):
    cost = int(input())
    rooms_avaliable = tuple(map(int, input().split()))
    hotels.append((cost, rooms_avaliable))
hotels.sort()

minimum_cost = float("inf")
for week in range(w):
    for i in range(len(hotels)):
        if hotels[i][1][week] < n: continue
        minimum_cost = min(hotels[i][0] * min(hotels[i][1][week], n), minimum_cost)

if minimum_cost > b: print("stay home")
else: print(minimum_cost)