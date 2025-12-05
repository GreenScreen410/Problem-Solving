P, Q = map(int, input().split())
for x in [i for i in range(1, P + 1) if P % i == 0]:
    for y in [j for j in range(1, Q + 1) if Q % j == 0]:
        print(x, y)