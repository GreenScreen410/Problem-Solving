while True:
    n = int(input())
    if n == 0:
        break
    print(n if n <= 1000000 else n * 9 // 10 if n <= 5000000 else n * 8 // 10)