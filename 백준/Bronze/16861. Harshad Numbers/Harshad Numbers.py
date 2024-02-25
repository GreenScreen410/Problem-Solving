n = int(input())
while True:
    if n % sum(int(i) for i in str(n)) == 0:
        print(n)
        exit(0)
    n += 1