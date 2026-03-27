n, C = map(int, input().split())

cost = float("inf")
for _ in range(n):
    p, d, v = map(int, input().split())
    cost = min(cost, p + d + C * v)

print(cost)