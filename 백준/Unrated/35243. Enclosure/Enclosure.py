import math

def area(n):
    return ((t - n * m) ** 2) / (4 * n * math.tan(math.pi / n))


c = int(input())

for _ in range(c):
    m, t = map(int, input().split())
    if t < 3 * m:
        print(0)
        continue
    
    low, high = 3, t // m
    for _ in range(100):
        if low >= high:
            break
        
        m1 = low + (high - low) // 3
        m2 = high - (high - low) // 3
        if area(m1) < area(m2):
            low = m1 + 1
        else:
            high = m2 - 1
            
    print(f"{area(low):.6f}")