n = int(input())
for b in [1, 2, 4, 8, 16, 32, 64]:
    if (1 << b) - 1 >= n:
        if b == 1:
            print("1 bit")
        else:
            print(f"{b} bits")
        break