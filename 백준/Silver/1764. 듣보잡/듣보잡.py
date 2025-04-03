N, M = map(int, input().split())

a = set()
for _ in range(N):
    a.add(input())

b = set()
for _ in range(M):
    b.add(input())

result = []
for i in a:
    if i in b:
        result.append(i)
result.sort()

print(len(result))
print(*result, sep="\n")
