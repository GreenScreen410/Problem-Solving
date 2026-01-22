N, b = map(int, input().split())
if N <= (1 << (b + 1)) - 1:
    print("yes")
else:
    print("no")