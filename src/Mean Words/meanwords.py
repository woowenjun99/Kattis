n = int(input())
words = [input().strip() for _ in range(n)]
length_of_longest_word = 0
for word in words: length_of_longest_word = max(length_of_longest_word, len(word))
for i in range(length_of_longest_word):
    total = words_used = 0
    for word in words:
        if i >= len(word): continue
        total += ord(word[i]) - ord("a")
        words_used += 1
    print(chr(ord("a") + total // words_used), end="")