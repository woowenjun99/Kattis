"""
Topic: Hashmap

One of the hidden test case would be a double space "  ".
If we perform input().strip(), it will not only remove the
\n but also the spacing. The correct output should be 0 0.
Therefore, it is important to be aware not to perform .strip()
and do .pop() instead.
"""
import sys

input = sys.stdin.readline
keypad = {
    "a": "2",
    "b": "22",
    "c": "222",
    "d": "3",
    "e": "33",
    "f": "333",
    "g": "4",
    "h": "44",
    "i": "444",
    "j": "5",
    "k": "55",
    "l": "555",
    "m": "6",
    "n": "66",
    "o": "666",
    "p": "7",
    "q": "77",
    "r": "777",
    "s": "7777",
    "t": "8",
    "u": "88",
    "v": "888",
    "w": "9",
    "x": "99",
    "y": "999",
    "z": "9999",
    " ": "0"

}
n = int(input())

for i in range(1, n + 1):
    stack = []
    sentence = list(input())
    sentence.pop()
    last_character_pressed = ""
    for letter in sentence: 
        if stack and stack[-1][-1] == keypad[letter][0]:
            stack.append(" ")
            
        last_character_pressed = keypad[letter]
        stack.append(keypad[letter])
    sys.stdout.write(f"CASE #{i}: " + "".join(stack) + "\n")