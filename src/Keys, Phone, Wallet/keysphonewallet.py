compulsory = {"keys", "phone", "wallet"}
for _ in range(int(input())):
    item = input().strip()
    if item in compulsory: compulsory.remove(item)
if not compulsory: print("ready")
else: 
    for item in sorted(compulsory): print(item)