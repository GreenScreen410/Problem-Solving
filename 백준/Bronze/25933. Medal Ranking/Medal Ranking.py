n = int(input())

for _ in range(n):
    data = list(map(int, input().split()))

    usa = data[:3]
    russia = data[3:]
    
    win_count = sum(usa) > sum(russia)
    win_color = usa > russia
    
    print(*(data))
    if win_count and win_color:
        print("both")
    elif win_count:
        print("count")
    elif win_color:
        print("color")
    else:
        print("none")
    
    print()