N, M = map(int, input().split())

limit = []
for _ in range(N):
    L, S = map(int, input().split())
    limit.extend([S] * L)

speed = []
for _ in range(M):
    L, S = map(int, input().split())
    speed.extend([S] * L)

result = 0
for i in range(100):
    result = max(result, speed[i] - limit[i])

print(result)