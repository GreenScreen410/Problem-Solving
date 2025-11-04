T = int(input())
for _ in range(T):
    N = input()
    total = int(N) + int(N[::-1])
    if str(total) == str(total)[::-1]:
        print("YES")
    else:
        print("NO")