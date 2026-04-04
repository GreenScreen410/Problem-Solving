Z = int(input())
for _ in range(Z):
    N, M, L = map(int, input().split())
    if L == 1:
        first = 1
    else:
        first = M - L + 2
    if first > N:
        print(0)
    else:
        print((N - first) // M + 1)