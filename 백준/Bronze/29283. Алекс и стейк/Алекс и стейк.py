k = int(input())

total = 0
for i in range(1, k + 1):
    total += 30 * ((i - 1) // 5 + 1)

print(total)