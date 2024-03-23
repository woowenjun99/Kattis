from collections import defaultdict
from math import ceil

n = int(input())
nums = [int(input()) for _ in range(n)]
did_exist = False
for k in range(2, n + 1):
    # Let's take into account that they must be a factor
    if n % k: continue

    is_valid = True
    sections = defaultdict(list)
    for index, num in enumerate(nums): sections[ceil((k * (index + 1)) / n)].append(num)
    for key in sections: sections[key].sort()
    keys = list(sections.keys())
    for key in range(1, len(keys)):
        if sections[keys[key - 1]][-1] > sections[keys[key]][0]:
            is_valid = False
            break
    
    if is_valid: 
        did_exist = True
        print(k)
        
if not did_exist: print(-1)