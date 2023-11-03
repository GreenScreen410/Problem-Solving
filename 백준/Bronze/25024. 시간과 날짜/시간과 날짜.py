day = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for _ in range(int(input())):
    x, y = map(int, input().split())
    
    if 0 <= x <= 23 and 0 <= y <= 59:
        print("Yes", end=" ")
    else:
        print("No", end=" ")
    
    if 1 <= x <= 12:
        if 1 <= y <= day[x]:
            print("Yes")
        else:
            print("No")
    else:
        print("No")