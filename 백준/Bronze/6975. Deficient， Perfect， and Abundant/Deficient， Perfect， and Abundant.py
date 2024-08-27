t = int(input())

for _ in range(t):
    n = int(input())
    
    divisor = [i for i in range(1, n) if n % i == 0]
    if sum(divisor) < n:
        print(f"{n} is a deficient number.")
    elif sum(divisor) == n:
        print(f"{n} is a perfect number.")
    else:
        print(f"{n} is an abundant number.")
    print()