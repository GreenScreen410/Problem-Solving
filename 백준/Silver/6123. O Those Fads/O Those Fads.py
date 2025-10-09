N, L, K = map(int, input().split())
R = [int(input()) for _ in range(N)]

R.sort()
count = 0
for i in R:
    if i <= L:
        count += 1
        L += K
    else:
        break

print(count)