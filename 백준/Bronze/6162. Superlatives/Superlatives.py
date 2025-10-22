K = int(input())

for x in range(1, K + 1):
    E, A = map(int, input().split())
    
    print(f"Data Set {x}:")
    if E <= A:
        print("no drought")
    else:
        if E / A <= 5:
            print("drought")
        else:
            count = 0
            threshold = 5
            while E / A > threshold:
                count += 1
                threshold *= 5
            print("mega " * count + "drought")
    
    print()