S = input()

n = len(S)
prefix = [0] * (n + 1)
for i in range(n):
    prefix[i + 1] = prefix[i] + int(S[i])

for L in range(n if n % 2 == 0 else n - 1, 0, -2):
    for i in range(n - L + 1):
        mid = i + L // 2
        if prefix[i] - prefix[mid] == prefix[mid] - prefix[i + L]:
            print(L)
            exit()