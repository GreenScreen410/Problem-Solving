from itertools import product

N, M = map(int, input().split())
A = sorted(list(product(range(1, N + 1), repeat=M)))

for i in A :
    print(*i)