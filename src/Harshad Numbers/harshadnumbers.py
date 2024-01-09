n = int(input())
while True:
    sum_of_digits = 0
    cloned = n
    while cloned > 0:
        sum_of_digits += cloned % 10
        cloned //= 10
    if n % sum_of_digits == 0:
        print(n)
        exit(0)
    n += 1