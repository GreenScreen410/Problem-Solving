T = int(input())

for _ in range(T):
    s = input()
    
    n = int(len(s) ** 0.5)
    enc = [list(s[i * n : (i + 1) * n]) for i in range(n)]
    dec = [[""] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            dec[i][j] = enc[j][n - 1 - i]
    
    print("".join("".join(row) for row in dec))