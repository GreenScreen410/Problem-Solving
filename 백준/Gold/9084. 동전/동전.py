from sys import stdin
input = lambda : stdin.readline().strip()

T = int(input())
for _ in range(T) :
    N = int(input())
    coin = list(map(int, input().split()))
    M = int(input())

    dp = [0 for _ in range(M+1)]
    dp[0] = 1
    
    for i in coin :
        for j in range(1, M+1) :
            if j >= i :
                dp[j] += dp[j-i]
    print(dp[M])