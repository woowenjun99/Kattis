n = int(input())
buses = [int(x) for x in input().split()]

buses.sort()
ptr = 0
while ptr < len(buses):
    initial = [buses[ptr], buses[ptr]]
    ptr += 1
    while ptr < len(buses) and buses[ptr] == initial[1] + 1:
        initial[1] = initial[1] + 1
        ptr += 1
    
    if initial[0] == initial[1]:
        print(f"{initial[0]}", end=" ")
    elif initial[1] != initial[0] + 1:
        print(f"{initial[0]}-{initial[1]}", end=" ")
    else:
        print(f"{initial[0]} {initial[1]}", end=" ")