K, N = map(int, input().split())

if N == 1:
    print(-1)
else:
    if K * N % (N - 1):
        print(K * N // (N - 1) + 1)
    else:
        print(K * N // (N - 1))