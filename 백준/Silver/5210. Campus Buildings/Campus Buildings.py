K = int(input())
for x in range(1, K + 1):
    n = int(input())
    names = [input() for _ in range(n)]
    
    code = input().lower()
    print(f"Data Set {x}:")
    for name in names:
        i = 0
        for c in name.lower():
            if i < len(code) and c == code[i]:
                i += 1
        if i == len(code):
            print(name)