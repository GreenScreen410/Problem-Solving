S = input()

A = list()
for i in range(len(S)):
    A.append(S[i:])
A.sort()

print(*A, end="\n")