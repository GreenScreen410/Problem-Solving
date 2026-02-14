n = int(input())
for _ in range(n):
    line = input().split("'")
    
    name = line[1]
    a, b, c, sig = map(int, line[2].split())
    
    paper = (2 * a + 2 * b + 3) * c + 2 * b * (a + 3)
    
    div = 10 ** (len(str(paper)) - sig)
    if div > 1:
        area = (paper // div) * div
    else:
        area = paper
    
    print(f"{name} requires {area} square frightometers of paper to wrap")