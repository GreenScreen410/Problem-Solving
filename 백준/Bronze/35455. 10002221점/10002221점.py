T = int(input())
for _ in range(T):
    N, S = map(int, input().split())
    if S == 10 ** 7 + N:
        print("Yes")
    else:
        print("No")