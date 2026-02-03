while True:
    H, U, D, F = map(int, input().split())
    if H == 0:
        break

    day = 0
    height = 0.0
    climb = U
    
    while True:
        day += 1
        if climb > 0:
            height += climb
        if height > H:
            print(f"success on day {day}")
            break

        height -= D
        if height < 0:
            print(f"failure on day {day}")
            break

        climb -= U * F / 100.0
        if climb < 0:
            climb = 0