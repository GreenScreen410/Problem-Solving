T = int(input())

for _ in range(T):
    s = int(input())
    n = int(input())
    
    cost = s
    for i in range(n):
        q, s = map(int, input().split())
        cost += q * s 
        
    print(cost)