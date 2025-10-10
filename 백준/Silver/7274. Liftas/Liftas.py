N, K = map(int, input().split())

a = []
for _ in range(N):
    a.append(int(input()))
a.sort()

print(sum(a[:N - K]))