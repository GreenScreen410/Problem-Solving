n, m = map(int, input().split())

pisano = [0] * 60
pisano[0] = 0
pisano[1] = 1
for i in range(2, 60):
    pisano[i] = (pisano[i - 1] + pisano[i - 2]) % 10

result = []
for i in range(n, m + 1):
    result.append(str(pisano[i % 60]))

print("".join(result))