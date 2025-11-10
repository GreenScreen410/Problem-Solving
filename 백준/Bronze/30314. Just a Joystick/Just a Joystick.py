n = int(input())
a = input()
b = input()

result = 0
for i in range(n):
    x = abs(ord(a[i]) - ord(b[i]))
    result += min(x, 26 - x)
print(result)