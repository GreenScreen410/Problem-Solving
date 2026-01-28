N = int(input())
A = list(map(int, input().split()))

if N == 1:
    print(1)
else:
    ok = True
    for i in range(N - 1):
        if A[i] == A[i + 1]:
            ok = False
            break
    print(1 if ok else 0)