import sys
from collections import Counter

lines = sys.stdin.readlines()
lines.pop()
votes = Counter(lines)

results = None
most_votes = max(votes.values())
for key in votes:
    if votes[key] == most_votes: 
        if results != None: 
            print("Runoff!")
            exit(0)
        results = key.strip()
print(results)