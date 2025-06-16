n = input()

if len(n) == 1:
    print(n)
else:
    if n[1] >= "5":
        first = int(n[0]) + 1
    else:
        first = int(n[0])
    
    if first == 10:
        print("10" + "0" * (len(n) - 1))
    else:
        print(f"{first}" + "0" * (len(n) - 1))