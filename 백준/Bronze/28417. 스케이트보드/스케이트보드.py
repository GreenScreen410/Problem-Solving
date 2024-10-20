N = int(input())

scores = []
for _ in range(N):
    status = list(map(int, input().split()))
    scores.append(max(status[:2]) + sum(sorted(status[2:], reverse=True)[:2]))

print(max(scores))