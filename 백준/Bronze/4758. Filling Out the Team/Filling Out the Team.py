while True:
    speed, weight, strength = map(float, input().split())
    
    if speed == 0 and weight == 0 and strength == 0:
        break
    
    if speed <= 4.5 and weight >= 150 and strength >= 200:
        print("Wide Receiver", end=" ")
    if speed <= 6.0 and weight >= 300 and strength >= 500:
        print("Lineman", end=" ")
    if speed <= 5.0 and weight >= 200 and strength >= 300:
        print("Quarterback", end=" ")
    if not (speed <= 4.5 and weight >= 150 and strength >= 200 or
           speed <= 6.0 and weight >= 300 and strength >= 500 or
           speed <= 5.0 and weight >= 200 and strength >= 300):
        print("No positions")
    else:
        print()