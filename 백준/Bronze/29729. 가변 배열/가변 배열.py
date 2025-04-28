S0, N, M = map(int, input().split())

count = 0
for _ in range(N + M):
    if int(input()) == 1:
        if S0 == count:
            S0 += S0
        count += 1
    else:
        count -= 1

print(S0)