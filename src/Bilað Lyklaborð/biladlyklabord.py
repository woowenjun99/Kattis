sentence = input().strip()
new_sentence = []
for c in sentence:
    if not new_sentence or new_sentence[-1] != c: new_sentence.append(c)
print("".join(new_sentence))