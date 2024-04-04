M = int(input())
cup = [0, 1, 2, 3]
for i in range(M):
    X, Y = map(int, input().split())
    cup[X], cup[Y] = cup[Y], cup[X]
print(cup.index(1))