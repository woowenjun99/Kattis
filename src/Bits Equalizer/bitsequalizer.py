# Time complexity: O(s)
#
# counter_t["0"] tells us the maximum possible number of 0 bits we can have
# We can only get 0 bit in s from what it has and the question marks.
# Therefore, if we are not able to get the maximum possible 0, then we return -1.
#
# For difference_in_s["0"] and difference_in_s["1"], it tells us that in that position, it is 1 or 0 respectively.
# Maximum number of achievable swaps: min(difference_in_s["0"], difference_in_s["1"])
# difference_in_s["0"] -= max_swaps
# difference_in_s["1"] -=  max_swaps
# If there is no leftover, we have difference_in_s["?"].
# If there is leftover, we need to convert the corresponding ? to its opposite and swap.
# 0 and ? ==> Convert ? to 1 and swap, 1 and ? ==> Convert ? to 0 and swap, ? ==> Convert to corresponding in t
# i.e. sum(difference_in_s.values()) ==> Minimising, we get sum(difference_in_s.values()) - swaps_required
from collections import Counter, defaultdict

for i in range(1, int(input()) + 1):
    s = input().strip()
    t = input().strip()
    
    counter_s = Counter(s)
    counter_t = Counter(t)
    if counter_t["0"] > counter_s["?"] + counter_s["0"]:
        print(f"Case {i}: -1")
        continue

    difference_in_s = defaultdict(int)
    for j in range(len(t)):
        if t[j] == s[j]: continue
        difference_in_s[s[j]] += 1

    swaps_required = min(difference_in_s["0"], difference_in_s["1"])
    print(f"Case {i}: {sum(difference_in_s.values()) - swaps_required}")