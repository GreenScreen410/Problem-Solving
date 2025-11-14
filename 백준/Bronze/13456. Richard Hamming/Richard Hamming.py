T = int(input())
for _ in range(T):
    n = int(input())
    v = list(map(int, input().split()))
    u = list(map(int, input().split()))
    count = 0
    for i in range(n):
        if v[i] != u[i]:
            count += 1
    print(count)