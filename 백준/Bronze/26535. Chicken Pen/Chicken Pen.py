import math

n = int(input())
k = math.ceil(math.sqrt(n)) + 2

print("x" * k)
for _ in range(k - 2):
    print("x" + "." * (k - 2) + "x")
print("x" * k)