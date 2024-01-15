N = int(input())

# Since we want to minimise number of transactions and amount
# wasted, we should maximise the use of 500.
count = N // 500
N %= 500

# Since 200 = 2 * 100, as long as the amount is more than 100,
# we should top up with 200 SEK immediately to save 1 transaction.
if N >= 400 or N <= 200:
    count += 1
else:
    count += 2

print(count)