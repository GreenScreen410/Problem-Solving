from decimal import Decimal, getcontext, ROUND_HALF_UP
getcontext().rounding = ROUND_HALF_UP

z = int(input())
for _ in range(z):
    
    r_total, g_total, b_total = 0, 0, 0
    for _ in range(10):
        r, g, b = map(float, input().split())
        r_total += r
        g_total += g
        b_total += b
    
    print(round(Decimal(r_total / 10), 0), round(Decimal(g_total / 10), 0), round(Decimal(b_total / 10), 0))