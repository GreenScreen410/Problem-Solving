import math

while True:
    D, E = map(int, input().split())
    if D == 0 and E == 0:
        break
    
    min_diff = float("inf")
    for x in range(D + 1):
        y = D - x
        diff = abs(math.sqrt(x * x + y * y) - E)
        if diff < min_diff:
            min_diff = diff
    
    print(f"{min_diff:.10f}")