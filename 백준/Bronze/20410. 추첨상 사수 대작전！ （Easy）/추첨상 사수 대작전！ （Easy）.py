m, Seed, x1, x2 = map(int, input().split())
for a in range(m):
    c = (x1 - a * Seed) % m
    if (a * x1 + c) % m == x2:
        print(a, c)
        break