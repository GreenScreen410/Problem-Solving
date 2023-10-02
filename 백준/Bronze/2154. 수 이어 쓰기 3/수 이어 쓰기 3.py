N = int(input())

S = ""
for i in range(1, 100001):
    S += str(i)

print(S.index(str(N)) + 1)