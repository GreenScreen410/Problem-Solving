N = int(input())
k = int(input())

result = 0
for i in range(k + 1):
    result += N * 10 ** i

print(result)