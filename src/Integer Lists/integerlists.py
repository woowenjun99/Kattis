from json import loads
from collections import deque

for _ in range(int(input())):
    string = input().strip()
    n = int(input())
    array = deque(loads(input().strip()))
    is_front = True
    terminated_early = False
    for i in string:
        if i == "R": 
            is_front = not is_front
            continue
        if not array:
            print("error")
            terminated_early = True
            break
        if is_front: array.popleft()
        else: array.pop()
    
    if not terminated_early:
        to_print = str(list(array) if is_front else list(array)[::-1]).replace(" ", "")
        print(to_print)