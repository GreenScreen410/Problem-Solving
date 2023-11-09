from statistics import median

a = []
for _ in range(5):
    a.append(int(input()))

print(sum(a) // 5)
print(median(a))