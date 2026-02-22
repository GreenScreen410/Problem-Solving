T = int(input())
for _ in range(T):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    if n <= m:
        print("Yes")
    else:
        print("No")