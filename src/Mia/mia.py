import sys

for line in sys.stdin.readlines():
    line = line.strip().split()
    if line[0] == "0" and line[1] == "0" and line[2] == "0" and line[3] == "0":
        exit(0)
    s0, s1, r0, r1 = line
    
    # Prioritise 12 and 21
    if s0 + s1 in {"12", "21"} and r0 + r1 in {"12", "21"}:
        print("Tie.")
        continue
    if s0 + s1 in {"12", "21"}:
        print("Player 1 wins.")
        continue
    if r0 + r1 in {"12", "21"}:
        print("Player 2 wins.")
        continue
    
    if s0 == s1 and r0 == r1:
        if s0 == r0:
            print("Tie.")
            continue
        elif int(s0) > int(r0):
            print("Player 1 wins.")
            continue
        else:
            print("Player 2 wins.")
            continue
    if s0 == s1:
        print("Player 1 wins.")
        continue
    if r0 == r1:
        print("Player 2 wins.")
        continue

    assert r0 != r1 and s0 != s1
    player_one = int("".join(sorted([s0, s1], reverse=True)))
    player_two = int("".join(sorted([r0, r1], reverse=True)))
    if player_one > player_two:
        print("Player 1 wins.")
        continue
    elif player_two > player_one:
        print("Player 2 wins.")
        continue
    print("Tie.")
