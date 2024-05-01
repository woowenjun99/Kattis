# We are guaranteed to match all the remaining cards if one of the two conditions are satisfied.
# 
# Condition 1: counter[None] <= 2
# if counter[None] == 0, we are guaranteed to find matches for all cards.
# if counter[None] == 1, there is only 1 card that is opened before and occurred once.
# if counter[None] == 2, the unknown card can either match to the other unknown or one of the cards that appeared once.
#
# Condition 2: counter[None] == one_count
# A B C D NONE NONE NONE NONE
# We are guaranteed that one of the unknown matches to one of the known

from collections import Counter, defaultdict

n = int(input())
rounds = int(input())
cards = [None] * n
matched = [False] * n

score = 0
for i in range(rounds):
    a, b, c, d = input().split()
    a = int(a) - 1
    b = int(b) - 1
    cards[a] = c
    cards[b] = d
    if cards[a] == cards[b]:
        matched[a] = matched[b] = True
        score += 1

counter = Counter(cards)
if counter[None] <= 2:
    print(n // 2 - score)
    exit(0)

not_matched_yet = defaultdict(int)
for index, card in enumerate(cards):
    if card == None: continue
    if not matched[index]: not_matched_yet[card] += 1

one_count = 0
for card in not_matched_yet:
    if card == None: continue 
    if not_matched_yet[card] == 1: one_count += 1

if counter[None] == one_count:
    print(n // 2 - score)
    exit(0)

print(list(not_matched_yet.values()).count(2))