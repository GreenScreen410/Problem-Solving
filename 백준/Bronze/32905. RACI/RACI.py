n, m = map(int, input().split())
matrix = [input().split() for _ in range(n)]

for i in matrix:
    if i.count("A") != 1:
        print("No")
        exit()

print("Yes")