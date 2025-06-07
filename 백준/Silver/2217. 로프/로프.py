N = int(input())

ropes = []
for _ in range(N):
    ropes.append(int(input()))
ropes.sort()

result = []
for i in ropes:
    result.append(i * N)
    N -= 1

print(max(result))