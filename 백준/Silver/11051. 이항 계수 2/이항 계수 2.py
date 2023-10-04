import math

N, K = map(int, input().split())

result = 1
for _ in range(K):
    result *= N
    N -= 1

print((result // math.factorial(K)) % 10007)