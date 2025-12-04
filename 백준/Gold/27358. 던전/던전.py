T = int(input())

for _ in range(T):
    N = int(input())
    D = list(map(int, input().split()))
    S = input()
    R = list(map(int, input().split()))

    result = 1
    for i in range(N - 1, -1, -1):
        required = 0
        if S[i] == "+":
            required = max(1, result - R[i])
        elif S[i] == "*":
            required = (result + R[i] - 1) // R[i]
        result = max(required + D[i], D[i] + 1)

    print(result)