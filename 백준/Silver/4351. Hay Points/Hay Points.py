m, n = map(int, input().split())

dic = {}
for _ in range(m):
    w, v = input().split()
    dic[w] = int(v)

for _ in range(n):
    total = 0
    while True:
        line = input().strip()
        if line == ".":
            break
        
        for word in line.split():
            if word in dic:
                total += dic[word]
    
    print(total)