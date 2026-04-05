t = int(input())
for _ in range(t):
    a = input()
    b = input()
    
    if all(c in set(a) for c in b):
        print("YES")
    else:
        print("NO")