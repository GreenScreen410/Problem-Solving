import math

N = int(input())

base = math.comb(N, 2)
if N % 2 == 0:
    panalty = (N - 2) // 2
    print(base + panalty)
else:
    print(base)