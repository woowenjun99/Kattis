encrypted = list(input().strip())
key = list(input().strip())
for i, v in enumerate(encrypted):
    if i % 2 == 0:
        encrypted[i] = chr((ord(v) - ord(key[i])) % 26 + ord("A"))
        continue
    encrypted[i] = chr((ord(v) + ord(key[i])) % 26 + ord("A"))
print("".join(encrypted))
