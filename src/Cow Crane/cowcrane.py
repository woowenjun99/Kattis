"""
Try all possible paths
(1). start -> m -> M -> l -> L
(2). start -> l -> L -> m -> M
(3). start -> m -> l -> L -> l -> M
(4). start -> l -> m -> M -> m -> L
"""
m, l = list(map(int, input().split()))
M, L = list(map(int, input().split()))
tm, tl = list(map(int, input().split()))

if abs(0 - m) + abs(M - m) <= tm and abs(0 - m) + abs(M - m) + abs(M - l) + abs(l - L) <= tl: print("possible")
elif abs(0 - l) + abs(L - l) <= tl and abs(0 - l) + abs(L - l) + abs(m - L) + abs(M - m) <= tm: print("possible")
elif abs(0 - m) + abs(l - m) + abs(L - l) <= tl and abs(0 - m) + abs(l - m) + 2 * abs(L - l) + abs(M - l) <= tm: print("possible")
elif abs(0 - l) + abs(m - l) + abs(M - m) <= tm and abs(0 - l) + abs(m - l) + 2 * abs(M - m) + abs(L - m) <= tl: print("possible")
else: print("impossible")