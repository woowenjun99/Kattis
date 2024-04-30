while True:
    line = input().strip()
    if line == "0": exit(0)
    k, m = list(map(int, line.split()))
    courses_freddy_took = set(list(map(int, input().split())))
    can_graduate = "yes"
    for _ in range(m):
        line = list(map(int, input().split()))[1:]
        minimum = line[0]
        if len(set(line[1:]).intersection(courses_freddy_took)) < minimum: can_graduate = "no"
    print(can_graduate)