T = int(input())

for _ in range(T):    
    n = int(input())
    s, t = map(int, input().split()) 
    
    time = 0
    while n > 0:
        if n % 2 == 1:
            n -= 1
            time += s
        else:
            n //= 2
            time += min(n * s, t)
            
    print(time)