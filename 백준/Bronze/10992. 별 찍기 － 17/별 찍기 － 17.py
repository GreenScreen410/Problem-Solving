N = int(input())
for i in range(1, N + 1):
    if(i == 1 or i == N):
        print(" " * (N - i) + "*" * (2 * i - 1))
    else:
        print(" " * (N - i) + "*" + " " * (2 * (i - 1) - 1) + "*")