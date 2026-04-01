T = int(input())
for x in range(1, T + 1):
    n, r1, c1, r2, c2 = map(int, input().split())
    dr = abs(r1 - r2)
    dc = abs(c1 - c2)
    if (dr == 1 and dc == 2) or (dr == 2 and dc == 1):
        print(f"Case {x}: YES")
    else:
        print(f"Case {x}: NO")