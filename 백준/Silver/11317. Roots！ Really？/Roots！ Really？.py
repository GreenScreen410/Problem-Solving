import math

T = int(input())
for _ in range(T):
    a, b, c, s, t = map(int, input().split())

    D = b * b - 4 * a * c
    if D < 0:
        print("No")
    else:
        if s <= (-b + math.sqrt(D)) / (2 * a) <= t or s <= (-b - math.sqrt(D)) / (2 * a) <= t:
            print("Yes")
        else:
            print("No")