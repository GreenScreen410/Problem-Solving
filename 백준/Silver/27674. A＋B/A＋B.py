t = int(input())
input()

for _ in range(t):
    s = input()
    if not s:
        s = input()
    
    s = sorted(s, reverse=True)
    a, b = "", ""
    for i, d in enumerate(s):
        if i % 2 == 0:
            a += d
        else:
            b += d
    print(int(a) + int(b))