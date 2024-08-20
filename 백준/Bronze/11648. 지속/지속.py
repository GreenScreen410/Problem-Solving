N = input()

count = 0
while len(N) > 1:
    result = 1
    for i in N:
        result *= int(i)
    N = str(result)
    count += 1

print(count)