def out_shuffle(cards):
    if len(cards) % 2 == 1:
        first_half = cards[0:len(cards) // 2 + 1]
        second_half = cards[len(cards) // 2 + 1:]
    else:
        first_half = cards[0: len(cards) // 2]
        second_half = cards[len(cards) // 2:]
        
    new_cards = []
    left = right = 0
    while left < len(first_half) and right < len(second_half):
        new_cards.append(first_half[left])
        new_cards.append(second_half[right])
        left += 1
        right += 1

    if len(cards) % 2 == 1: new_cards.append(first_half[-1])
    return new_cards

        
def in_shuffle(cards):
    first_half = cards[0: len(cards) // 2]
    second_half = cards[len(cards) // 2:]
    
    new_cards = []
    left = right = 0
    while left < len(first_half) and right < len(second_half):
        new_cards.append(second_half[right])
        new_cards.append(first_half[left])
        left += 1
        right += 1
    
    if len(cards) % 2 == 1: new_cards.append(second_half[-1])
    return new_cards

# Input reading
line = input().strip().split()
n = int(line[0])
word = line[1]

original = [i for i in range(1, n + 1)]
modified = original.copy()

result = 0
if word == "out":
    modified = out_shuffle(modified)
    while modified != original:
        modified = out_shuffle(modified)
        result += 1
else:
    modified = in_shuffle(modified)
    while modified != original:
        modified = in_shuffle(modified)
        result += 1
print(result + 1)