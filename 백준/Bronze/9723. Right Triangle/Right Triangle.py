T = int(input())
for x in range(1, T + 1):
    a, b, c = sorted(map(int, input().split()))
    if a ** 2 + b ** 2 == c ** 2:
        print(f"Case #{x}: YES")
    else:
        print(f"Case #{x}: NO")