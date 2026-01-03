H, M, S = map(int, input().split())

S += 1
if S == 60:
    S = 0
    M += 1
    if M == 60:
        M = 0
        H += 1
        if H == 24:
            H = 0

print(f"{H:02d}:{M:02d}:{S:02d}")