N = int(input())
for i in range(N, 0, -1):
    print(" " * (N - i) + "*" * (2 * i - 1))
for i in range(2, N + 1):
    print(" " * (N - i) + "*" * (2 * i - 1))