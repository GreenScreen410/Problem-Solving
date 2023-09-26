from sys import stdin
from bisect import bisect_left
input = lambda : stdin.readline().strip()

N = int(input())
A = list(map(int, input().split()))
dp = [-10000000000]

for i in A :
    if dp[-1] < i :
        dp.append(i)
    else :
        dp[bisect_left(dp, i)] = i

print(len(dp) - 1)