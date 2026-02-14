from math import sqrt

n = int(input())
for _ in range(n):
    a = input()
    x1, y1, z1 = map(float, input().split())
    b = input()
    x2, y2, z2 = map(float, input().split())
    print(f"{a} to {b}: {sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2 + (z2 - z1) ** 2):.2f}")