def gcd(a, b, n):
    if b == 0:
        return n - 1
    return gcd(b, a % b, n + a // b)

a, b = map(int, input().split())
print(gcd(a, b, 0))