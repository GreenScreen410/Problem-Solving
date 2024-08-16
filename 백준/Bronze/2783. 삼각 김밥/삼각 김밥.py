X, Y = map(int, input().split())
N = int(input())

prices = [X / Y]
for _ in range(N):
    Xi, Yi = map(int, input().split())
    prices.append(Xi / Yi)
print(min(prices) * 1000)