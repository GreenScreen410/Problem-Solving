total = []

while True:
    try:
        t = input().split()[1:]
        for i in t:
            total.append(int(i))
    except EOFError:
        print(min(total), max(total))
        break