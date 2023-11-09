from statistics import mode

a = []
for _ in range(10):
    a.append(int(input()))

print(sum(a) // 10)
print(mode(a))