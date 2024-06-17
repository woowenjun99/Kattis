def solve():
    sentence = list(input().lower())
    sentence[0] = sentence[0].upper()
    print("".join(sentence))
    
for _ in range(int(input())): solve()