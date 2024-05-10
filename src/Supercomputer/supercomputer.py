class FTree:
    def __init__(self, f):
        self.n = len(f)
        self.ft = [0] * (self.n + 1)

    def lsone(self, s):
        return s & (-s)

    def query(self, i, j):
        if i > 1:
            return self.query(1, j) - self.query(1, i - 1)

        s = 0
        while j > 0:
            s += self.ft[j]
            j -= self.lsone(j)

        return s

    def update(self, i):
        value = self.query(i, i)
        v = 1 if value == 0 else -1
        while i <= self.n:
            self.ft[i] += v
            i += self.lsone(i)

n, k = list(map(int, input().split()))
ft = FTree([0] * n)
for _ in range(k):
    line = list(input().strip().split())
    if line[0] == "F": ft.update(int(line[1]))
    else: print(ft.query(int(line[1]), int(line[2])))