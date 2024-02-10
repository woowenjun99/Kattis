sentence = input().strip().split()
count = 0
for word in sentence: count += 1 if word.find("ae") != -1 else 0
if count * 100 / len(sentence) >= 40:
    print("dae ae ju traeligt va")
    exit(0)
print("haer talar vi rikssvenska")