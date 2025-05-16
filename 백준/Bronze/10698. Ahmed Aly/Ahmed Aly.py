T = int(input())

for n in range(1, T + 1):
    S = input()
    S = S.replace("=", "==")
    
    if eval(S):
        print(f"Case {n}: YES")
    else:
        print(f"Case {n}: NO")