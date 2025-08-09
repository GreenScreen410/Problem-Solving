from math import gcd

M, N = map(int, input().split())

m = set()
for i in range(M, N + 1):
    for j in range(M, N + 1):
        divisor = gcd(i, j)
        m.add((i // divisor, j // divisor))

print(len(m))