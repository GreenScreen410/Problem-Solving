N = input()

for i in range(1, len(N)):
    A, B = 1, 1
    for c in N[:i]:
        A *= int(c)
    
    for c in N[i:]:
        B *= int(c)
    
    if A == B:
        print("YES")
        exit()
        
print("NO")