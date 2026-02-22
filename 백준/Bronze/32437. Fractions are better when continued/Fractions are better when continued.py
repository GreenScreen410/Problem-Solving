n = int(input())

fib = [0] * (n + 1)
fib[0] = fib[1] = 1
if n >= 2:
    fib[2] = 2
    for i in range(3, n + 1):
        fib[i] = fib[i - 1] + fib[i - 2]

print(fib[n])