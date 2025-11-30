import math

n = int(input())

base = math.comb(n, 2)
if n % 2 == 0:
    panalty = (n - 2) // 2
    print(base + panalty)
else:
    print(base)