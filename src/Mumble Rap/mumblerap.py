n = int(input())
sentence = input().strip()
max_so_far = left = right = 0
while left < len(sentence) and right < len(sentence):
    if sentence[left].isnumeric():
        right = left
        while right < len(sentence) and sentence[right].isnumeric(): right += 1
        max_so_far = max(max_so_far, int(sentence[left: right]))
    left += 1
print(max_so_far)