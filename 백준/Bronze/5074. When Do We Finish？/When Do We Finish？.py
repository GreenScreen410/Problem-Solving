while True:
    start, duration = input().split()
    if start == "00:00" and duration == "00:00":
        break
    
    start_h, start_m = map(int, start.split(":"))
    duration_h, duration_m = map(int, duration.split(":"))
    
    end_m = start_m + duration_m
    carry = end_m // 60
    end_m %= 60
    
    end_h = start_h + duration_h + carry
    count = end_h // 24
    end_h %= 24
    
    if count > 0:
        print(f"{end_h:02d}:{end_m:02d} +{count}")
    else:
        print(f"{end_h:02d}:{end_m:02d}")
