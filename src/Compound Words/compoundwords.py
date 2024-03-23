import sys
from itertools import combinations

lines = sys.stdin.readlines()
words = []
for line in lines: words.extend(line.strip().split())
s = set()
for s1, s2 in list(combinations(words, 2)):
    s.add(s1 + s2)
    s.add(s2 + s1)
for word in sorted(s): print(word)
