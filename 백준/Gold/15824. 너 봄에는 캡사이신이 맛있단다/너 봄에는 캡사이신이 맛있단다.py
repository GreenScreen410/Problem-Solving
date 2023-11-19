N = int(input())
scoville = sorted(map(int, input().split()))

answer = 0
mod = 1000000007
for i in range(N):
    answer += scoville[i] * (pow(2, i, mod) - pow(2, N - i - 1,mod))

print(answer % mod)