while True:
    n = int(input())
    if n == 0:
        break
    
    a1, a2, a3 = map(int, input().split())
    if a2 - a1 == a3 - a2:
        d = a2 - a1
        print(n * (2 * a1 + (n - 1) * d) // 2)
    
    else:
        r = a2 // a1
        print(a1 * (r ** n - 1) // (r - 1))