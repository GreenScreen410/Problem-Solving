N, X = map(int, input().split())
A = list(map(int, input().split()))

price = []
for i in range(N - 1):
    price.append((A[i] + A[i + 1]) * X)

print(min(price))