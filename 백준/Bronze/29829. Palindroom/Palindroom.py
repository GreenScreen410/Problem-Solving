N = list(map(int, input().split()))

a, b, c, d = N[0], N[1], N[2], N[3]
mismatches = 0
if a != d:
    mismatches += 1
if b != c:
    mismatches += 1

if mismatches <= 1:
    print("JAH")
    
    N[3] = N[0]
    N[2] = N[1]
    
    print(*N)
else:
    print("EI")