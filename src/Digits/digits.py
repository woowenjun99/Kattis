# Need to consider special case when line == 1 because x0 = 1 and x1 = 1 so i = 1.
import sys

lines = sys.stdin.readlines()
lines.pop()
for line in lines:
    line = line.strip()
    if len(line) == int(line):
        print(1)
        continue
    
    previous_x = len(line)
    i = 1
    while True:
        i += 1
        x = len(str(previous_x))
        if x == previous_x: break
        previous_x = x
    print(i)