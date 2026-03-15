while True:
    H1, M1, H2, M2 = map(int, input().split())
    if H1 == M1 == H2 == M2 == 0:
        break
    
    start = H1 * 60 + M1
    alarm = H2 * 60 + M2
    if alarm >= start:
        print(alarm - start)
    else:
        print((24 * 60 - start) + alarm)