T = int(input())
for _ in range(T):
    N = input()
    
    count = 0
    if N == "6174":
        print(0)
        continue

    while N != "6174":
        digits = list(N.zfill(4))
        digits.sort()
        N = str(int("".join(digits[::-1])) - int("".join(digits)))
        count += 1

    print(count)