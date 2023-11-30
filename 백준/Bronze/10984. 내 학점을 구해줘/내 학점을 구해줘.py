T = int(input())

for _ in range(T):
    N = int(input())

    c = 0
    g = 0
    for i in range(N):
        C, G = map(float, input().split())
        c += C
        g += G * C
    
    print(int(c), '%.1f' %round(g/c, 1))