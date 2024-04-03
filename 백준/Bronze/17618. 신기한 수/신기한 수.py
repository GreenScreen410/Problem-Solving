N = int(input())
amount = 0
for i in range(1, N + 1):
    if i % sum([int(c) for c in str(i)]) == 0:
        amount += 1
print(amount)