t = int(input())

for _ in range(t):
    n = int(input())
    
    k = 1
    power = 5
    while power < n:
        k += 1
        power *= 5
    
    if k == 1:
        print("MIT time")
    else:
        print(f"MIT^{k} time")