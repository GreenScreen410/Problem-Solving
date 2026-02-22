T = int(input())
for _ in range(T):
    s = input()
    
    x, y, q = 0, 0, 0
    for c in s:
        if c == "U":
            y += 1
        elif c == "D":
            y -= 1
        elif c == "L":
            x -= 1
        elif c == "R":
            x += 1
        else:
            q += 1
        
    print(x - q, y - q, x + q, y + q)