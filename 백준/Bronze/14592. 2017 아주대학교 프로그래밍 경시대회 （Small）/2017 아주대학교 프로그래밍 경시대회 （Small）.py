N = int(input())

participants = []
for i in range(N):
    S, C, L = map(int, input().split())
    participants.append((S, C, L, i + 1))

participants.sort(key=lambda x: (-x[0], x[1], x[2]))
print(participants[0][3])