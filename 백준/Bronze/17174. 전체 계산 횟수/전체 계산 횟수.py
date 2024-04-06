N, M = map(int, input().split())
total = N
while N:
    N = N // M
    total += N
print(total)