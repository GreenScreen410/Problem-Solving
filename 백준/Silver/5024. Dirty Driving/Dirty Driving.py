n, p = map(int, input().split())
dist = sorted(map(int, input().split()))

answer = 0
for i in range(n):
    candidate = p * (i + 1) - (dist[i] - dist[0])
    if candidate > answer:
        answer = candidate

print(answer)