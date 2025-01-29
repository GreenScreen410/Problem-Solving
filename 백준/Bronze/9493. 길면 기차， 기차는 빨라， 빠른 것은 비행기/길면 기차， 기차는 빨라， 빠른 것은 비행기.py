from math import floor

while True:
    M, A, B = map(int, input().split())
    
    if M == 0 and A == 0 and B == 0:
        break
    
    time = abs((M / A - M / B) * 60)
    hours = int(time // 60)
    minutes = int(time % 60)
    seconds = int(floor((time - floor(time)) * 60 + 0.5))
    
    print(f"{hours}:{minutes:02d}:{seconds:02d}")