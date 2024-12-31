D = int(input())

current_size = D
while True:
    try:
        yobi = int(input())
        if yobi >= current_size:
            print(current_size)
            break
        else:
            current_size += yobi
    except:
        break