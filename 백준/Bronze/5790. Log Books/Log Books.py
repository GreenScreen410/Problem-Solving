while True:
    N = int(input())
    if N == 0:
        break
    
    total = night_total = 0
    valid = True
    for _ in range(N):
        sunrise, sunset, starting, finishing = input().split()
        sunrise = int(sunrise[:2]) * 60 + int(sunrise[3:])
        sunset = int(sunset[:2]) * 60 + int(sunset[3:])
        starting = int(starting[:2]) * 60 + int(starting[3:])
        finishing = int(finishing[:2]) * 60 + int(finishing[3:])
        
        d = finishing - starting
        if d > 120:
            valid = False
        
        total += d
        night = 0
        
        if starting < sunrise:
            night += min(finishing, sunrise) - starting
        if finishing > sunset:
            night += finishing - max(starting, sunset)
        if night * 2 >= d:
            night_total += d
            
    print("PASS" if valid and total >= 50 * 60 and night_total >= 10 * 60 else "NON")