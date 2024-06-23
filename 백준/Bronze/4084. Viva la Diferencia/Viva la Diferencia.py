while True :
    abcd = list(map(int, input().split()))
    if sum(abcd) == 0:
        break
    
    count = 0
    while True :
        a, b, c, d = abcd[0], abcd[1], abcd[2], abcd[3]
        if a == b == c == d:
            break
        
        abcd[0] = abs(a - b)
        abcd[1] = abs(b - c)
        abcd[2] = abs(c - d)
        abcd[3] = abs(d - a)
        count += 1
    
    print(count)