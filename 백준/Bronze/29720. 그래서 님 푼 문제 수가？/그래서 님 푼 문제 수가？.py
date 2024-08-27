N, M, K = map(int, input().split())
print(max(N - (M * K), 0), N - M * (K - 1) - 1)