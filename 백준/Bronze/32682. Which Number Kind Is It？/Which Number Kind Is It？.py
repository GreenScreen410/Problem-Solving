from math import isqrt
from sys import stdin
input = stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())

    if N % 2 == 1 and int(isqrt(N)) ** 2 == N:
        print("OS", end="")
    elif N % 2 == 1:
        print("O", end="")
    elif int(isqrt(N)) ** 2 == N:
        print("S", end="")
    else:
        print("EMPTY", end="")
    print()