from sys import stdin
input = stdin.readline

def factorial(n):
    return n * factorial(n - 1) if n > 0 else 1

def convert_to_base_10(n):
    base_10 = 0
    for i in range(1, len(n) + 1):
        base_10 += int(n[len(n) - i]) * factorial(i)
    return base_10

while True:
    n = input().strip()
    if n == "0":
        break
    print(convert_to_base_10(n))