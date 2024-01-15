text = input()
if text.find(":)") != -1 and text.find(":(") != -1:
    print("double agent")
elif text.find(":)") != -1:
    print("alive")
elif text.find(":(") != -1:
    print("undead")
else:
    print("machine")