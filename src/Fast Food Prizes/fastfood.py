for _ in range(int(input())):
    n, m = list(map(int, input().split()))
    prizes = [list(map(int, input().split()))[1:] for _ in range(n)]
    stickers_coach_has = list(map(int, input().split()))
    winnings = 0
    for prize in prizes:
        stickers_required = prize[:-1]
        winnings += min([stickers_coach_has[sticker - 1] for sticker in stickers_required]) * prize[-1]
    print(winnings)