# Time complexity: log n
# We set the uncertainty to be 1 for Miller Rabin because it is sufficient to pass the primality test
import random
 
def power(x, y, p):
    res = 1; 
    x = x % p; 
    while (y > 0):
        if (y & 1): res = (res * x) % p
        y = y >> 1
        x = (x * x) % p
    return res

def miillerTest(d, n):
    a = 2 + random.randint(1, n - 4)
    x = power(a, d, n)
    if x == 1 or x == n - 1: return True

    while (d != n - 1):
        x = (x * x) % n
        d *= 2
 
        if x == 1: return False
        if x == n - 1: return True

    return False

def isPrime(n):
    if n <= 1 or n == 4: return False
    if n <= 3: return True

    d = n - 1
    while (d % 2 == 0): d //= 2

    return miillerTest(d, n)

ans = isPrime(int(input()))
if not ans: print("NO")
else: print("YES")