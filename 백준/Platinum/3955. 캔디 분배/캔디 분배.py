t = int(input())

for _ in range(t):
    K, C = map(int,input().split())
    
    if K == 1:
        if C > 1:
            print("1")
        else:
            print("2")
            
    elif C == 1:
        if K != 1e9:
            print(K + 1)
        else:
            print("IMPOSSIBLE")
            
    else:
        try:
            value = pow(C, -1, K)
            if value <= 1e9:
                print(value)
            else:
                print("IMPOSSIBLE")
        except:
            print("IMPOSSIBLE")