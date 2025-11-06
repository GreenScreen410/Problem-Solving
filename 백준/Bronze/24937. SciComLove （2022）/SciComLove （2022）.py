S = "SciComLove"
N = int(input()) % len(S)
print(S[N:] + S[:N])