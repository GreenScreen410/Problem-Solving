while True:
    n = int(input())
    
    if n == 0:
        break
    
    a = list(map(int, input().split()))
    a.sort()
    
    diff = float("inf")
    for i in range(1, n):
        if diff > a[i] - a[i - 1]:
            diff = a[i] - a[i - 1]
            
    print(diff)