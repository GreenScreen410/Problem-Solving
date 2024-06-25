N = int(input())

for _ in range(N):
    S = input()
    
    if S[len(S) // 2] == S[len(S) // 2 - 1]:
        print("Do-it")
    else:
        print("Do-it-Not")