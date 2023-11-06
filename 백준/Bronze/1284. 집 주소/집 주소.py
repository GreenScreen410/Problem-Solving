while True:
    N = input()
    
    if N == '0':
        break
    
    count = len(N) + 1
    for i in N:
        if i == '0':
            count += 4
        elif i == '1':
            count += 2
        else:
            count += 3
    
    print(count)