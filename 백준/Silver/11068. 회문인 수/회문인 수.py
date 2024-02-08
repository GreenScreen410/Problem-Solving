def palindrome(S):
    return S == S[::-1]

def solve(n):
    for b in range(2, 65):
        converted = ""
        x = n
        while x > 0:
            if x % b < 10:
                converted = str(x % b) + converted
            else:
                converted = chr(ord('A') + x % b - 10) + converted
            x //= b
        if palindrome(converted):
            return 1
    return 0

T = int(input())
for _ in range(T):
    N = int(input())
    print(solve(N))