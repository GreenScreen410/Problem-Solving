while True:
    n, m = map(int, input().split())
    if n == 0 and m == 0:
        break
    
    missing = sum(range(1, n + 1)) - m
    for _ in range(n - 2):
        found = int(input())
        missing -= found
    
    print(missing)