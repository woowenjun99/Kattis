n = int(input())
ta, da = list(map(int, input().split()))
alice = n * ta
for i in range(n): alice += da * i
tb, db = list(map(int, input().split()))
bob = n * tb
for i in range(n): bob += db * i
if alice > bob: print("Bob")
elif alice == bob: print("=")
else: print("Alice")