N = int(input())
Z = [int(input()) for _ in range(N)]
Z.sort()

result = 1
while Z[result - 1] + 1 > result and result <= N:
    result = Z[result - 1] + 1

print(result)