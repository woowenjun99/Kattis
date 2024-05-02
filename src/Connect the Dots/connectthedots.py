import sys

# Precompute
original = [f"{i}" for i in range(10)]
for i in range(26): original.append(chr(ord("a") + i))
for i in range(26): original.append(chr(ord("A") + i))
mappers = { k: v for v, k in enumerate(original) }

# Build Test Cases
test_cases = [[]]
for line in sys.stdin.readlines():
    if line == "\n":
        test_cases.append([])
        continue
    test_cases[-1].append(list(line.strip()))

# Process each test case
for tc in test_cases:
    copy = [[None] * len(tc[0]) for _ in range(len(tc))]

    for row in range(len(tc)):
        for col in range(len(tc[row])):
            if tc[row][col] == "." or tc[row][col] == "-" or tc[row][col] == "+" or tc[row][col] == "|":
                continue
            value_detected = mappers[tc[row][col]]
            if value_detected + 1 < len(original) and tc[row].count(original[value_detected + 1]) != 0:
                for i in range(min(col, tc[row].index(original[value_detected + 1])), max(col, tc[row].index(original[value_detected + 1])) + 1):
                    if tc[row][i] == ".": tc[row][i] = "-"
            if value_detected - 1 >= 0 and tc[row].count(original[value_detected - 1]) != 0:
                for i in range(min(col, tc[row].index(original[value_detected - 1])), max(col, tc[row].index(original[value_detected - 1])) + 1):
                    if tc[row][i] == ".": tc[row][i] = "-"
    
    for col in range(len(tc[0])):
        for row in range(len(tc)):
            if tc[row][col] == "." or tc[row][col] == "-" or tc[row][col] == "+" or tc[row][col] == "|":
                continue
            
            value_detected = mappers[tc[row][col]]
            next_value = original[value_detected + 1] if value_detected + 1 < len(original) else None
            previous_value = original[value_detected - 1] if value_detected - 1 >= 0 else None
            index_of_next_value = index_of_previous_value = -1
            for i in range(len(tc)):
                if tc[i][col] == next_value: index_of_next_value = i
                if tc[i][col] == previous_value: index_of_previous_value = i
            if index_of_next_value != -1:
                for i in range(min(index_of_next_value, row), max(index_of_next_value, row) + 1):
                    if tc[i][col] == ".": tc[i][col] = "|"
                    elif tc[i][col] == "-": tc[i][col] = "+"
            if index_of_previous_value != -1:
                for i in range(min(index_of_previous_value, row), max(index_of_previous_value, row) + 1):
                    if tc[i][col] == ".": tc[i][col] = "|"
                    elif tc[i][col] == "-": tc[i][col] = "+"

    for line in tc: print("".join(line))
    print()