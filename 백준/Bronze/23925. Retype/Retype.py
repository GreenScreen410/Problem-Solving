T = int(input())
for x in range(1, T + 1):
    N, K, S = map(int, input().split())
    print(f"Case #{x}: {min((K - 1) + N + 1, (K - 1) + (K - S) + (N - S + 1))}")