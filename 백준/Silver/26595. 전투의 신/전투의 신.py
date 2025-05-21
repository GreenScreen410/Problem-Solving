N = int(input())
A, PA, B, PB = map(int, input().split())

x = 0
y = 0
for i in range(N // PA + 1):
    j = (N - PA * i) // PB
    if A * x + B * y < A * i + B * j:
        x = i
        y = j

print(x, y)