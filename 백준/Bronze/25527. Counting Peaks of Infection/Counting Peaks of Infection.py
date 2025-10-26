while True:
    n = int(input())
    if n == 0:
        break
    v = list(map(int, input().split()))
    
    count = 0
    for i in range(1, n - 1):
        if v[i] > v[i - 1] and v[i] > v[i + 1]:
            count += 1
    print(count)