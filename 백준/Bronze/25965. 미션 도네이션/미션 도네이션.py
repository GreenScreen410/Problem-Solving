N = int(input())
for _ in range(N):
    M = int(input())
    missions = []
    for _ in range(M):
        K, D, A = map(int, input().split())
        missions.append((K, D, A))
    k, d, a = map(int, input().split())
    
    total = 0
    for K, D, A in missions:
        donation = K * k - D * d + A * a
        if donation > 0:
            total += donation
    print(total)