"""
The furthest distance apart is either when they are at the start or
at the end. 
"""
from math import dist
kxs, kys, oxs, oys, kxe, kye, oxe, oye = list(map(int, input().split()))
print(max(dist([kxs, kys], [oxs, oys]), dist([kxe, kye], [oxe, oye])))