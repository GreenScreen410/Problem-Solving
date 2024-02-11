dp = [0] * (1001)
for i in range(2, 1001):
    dp[i] = dp[i - 1] + dp[i - 1] + (-1) ** i

n = int(input())
print(dp[n])