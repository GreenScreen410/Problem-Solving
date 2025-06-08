N, B = map(int, input().split())

result = ""
while N:
    result += str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[N % B])
    N //= B

print(result[::-1])