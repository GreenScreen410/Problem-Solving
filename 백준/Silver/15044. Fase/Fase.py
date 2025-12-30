N = int(input())
K = int(input())

scores = []
for _ in range(N):
    scores.append(int(input()))
scores.sort(reverse=True)

total = K
for i in range(K, N):
    if scores[i] == scores[K - 1]:
        total += 1
    else:
        break

print(total)