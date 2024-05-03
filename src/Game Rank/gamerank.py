# Precomputation
current_stars = [0] * 26
current_rank = 25
winning_streak = 0
stars_to_advance = [float("inf")]
for i in range(10): stars_to_advance.append(5)
for i in range(5): stars_to_advance.append(4)
for i in range(5): stars_to_advance.append(3)
for i in range(5): stars_to_advance.append(2)

status = input().strip()
for letter in status:
    if letter == "L":
        winning_streak = 0
        if current_rank == 0: continue
        if current_rank >= 1 and current_rank <= 20:
            if current_stars[current_rank] == 0 and current_rank < 20: current_rank += 1
            current_stars[current_rank] = max(0, current_stars[current_rank] - 1)
    else:
        # Compute the stars won
        stars_won = 1
        winning_streak += 1
        if current_rank >= 6 and current_rank <= 25 and winning_streak >= 3: stars_won += 1
        if current_rank == 0: continue
        
        # Compute the current rank
        if current_stars[current_rank] == stars_to_advance[current_rank]:
            current_rank -= 1
            current_stars[current_rank] = stars_won
        elif current_stars[current_rank] + 1 == stars_to_advance[current_rank] and stars_won == 2:
            current_stars[current_rank] += 1
            current_rank -= 1
            current_stars[current_rank] = 1
        else:
            current_stars[current_rank] += stars_won
            
if current_rank == 0: print("Legend")
else: print(current_rank)