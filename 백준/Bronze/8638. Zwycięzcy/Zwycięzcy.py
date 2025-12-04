N = int(input())
W = list(map(int, input().split()))

result = ""
for i in range(N):
    if W[i] == max(W):
        result += chr(ord("A") + i)

print(result)