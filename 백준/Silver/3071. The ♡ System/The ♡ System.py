def trinary(n):
    if n == 0:
        return '0'
    result = ''
    while n:
        n, remainder = divmod(n, 3)
        if remainder == 2:
            n += 1
            remainder = '-'
        result = str(remainder) + result
    return result

T = int(input())
for _ in range(T):
    n = int(input())
    print(trinary(n))