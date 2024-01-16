a, b, c, d = list(map(int, input().split()))
people = list(map(int, input().split()))
def count_dogs(person):
    dogs = 0
    if person % (a + b) <= a and person % (a + b) > 0: dogs += 1
    if person % (c + d) <= c and person % (c + d) > 0: dogs += 1
    return dogs

for p in people:
    result = count_dogs(p)
    if result == 2: print("both")
    elif result == 1: print("one")
    else: print("none")