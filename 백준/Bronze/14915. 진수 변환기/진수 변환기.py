m, n = map(int, input().split())

if m == 0:
    print(0)
else:
    result = ""
    while m > 0:
        result = "0123456789ABCDEF"[m % n] + result
        m //= n
    print(result)