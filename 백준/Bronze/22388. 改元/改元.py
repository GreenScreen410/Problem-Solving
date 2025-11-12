while True:
    line = input()
    if line == "#":
        break
    
    g, y, m, d = line.split()
    y = int(y)
    m = int(m)
    d = int(d)

    if y < 31 or (y == 31 and m < 5) or (y == 31 and m == 4 and d <= 30):
        print("HEISEI", y, m, d)
    else:
        print("?", y - 30, m, d)