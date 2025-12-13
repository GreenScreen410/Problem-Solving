N, M = map(int, input().split())
for i in range(N):
    row = ""
    for j in range(M):
        if (i + j) % 2 == 0:
            row += "*"
        else:
            row += "."
    print(row)