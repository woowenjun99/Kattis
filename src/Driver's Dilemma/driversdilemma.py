"""
It would be best to compute whether the driver has enough fuel to reach the next gas. station. 

1. We can get the duration of travelling by performing speed / mpg to get gallons per hour.
2. Next, we can add up the leak x + speed /  mpg to get the amount of fuel used in one hour.
3. Next, we will use the amount of fuel used in one hour to multiply with the duration taken to reach next station.
4. Finally we compare with what we have c / 2 to see if it is possible
"""

c, x, m = list(map(float, input().split()))
c /= 2

maximum_speed = 0
for _ in range(6):
    speed, mpg = list(map(float, input().split()))
    gallon_per_hour = speed / mpg + x
    duration_in_hours = m / speed
    fuel_required = duration_in_hours * gallon_per_hour
    if fuel_required <= c: maximum_speed = speed
    
if maximum_speed == 0: print("NO")
else: print(f"YES {int(maximum_speed)}")