from math import pi

n = int(input())
cycle = []
for i in range(26): cycle.append(chr(ord("A") + i))
cycle += [" ", "'"]
distance_between_a_letter = (pi * 60) / 28

for _ in range(n):
    letters = list(input())
    current_position = cycle.index(letters[0])
    total = 0

    for letter in letters:
        # Run forward
        counter = current_position
        run_forward = 0
        while cycle[counter % 28] != letter:
            run_forward += 1
            counter += 1
        
        new_index = counter % 28
        counter = current_position
        run_backward = 0
        while cycle[counter % 28] != letter:
            run_backward += 1
            counter -= 1
        current_position = new_index

        total += min(run_forward, run_backward)
    print((total * distance_between_a_letter / 15) + len(letters))