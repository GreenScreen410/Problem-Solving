size = {"S": 0, "M": 1, "L": 2}

while True:
    W = int(input())
    if W == 0:
        break
    
    shirts = [input() for _ in range(W)]
    H = int(input())
    shirts += [input() for _ in range(H)]
    
    shirts.sort(key=lambda s: (size[s[0]], s[1]))
    print(" ".join(shirts))