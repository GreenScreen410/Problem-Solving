import sys
input = sys.stdin.readline

N, A, B, C, D, E, F, G, H = map(int, input().split())

result = []
for X in range(N + 1):
    for Y in range(N - X + 1):
        Z = N - X - Y
        if A * X + B * Y + C * Z == D:
            if E * X + F * Y + G * Z == H:
                result.append((X, Y, Z))

if len(result) == 1:
    print(0)
    X, Y, Z = result[0]
    print(X, Y, Z)
elif len(result) > 1:
    print(1)
else:
    print(2)