C = int(input())
balance, best = 100, 100
for _ in range(C):
    V = int(input())
    balance += V
    best = max(best, balance)
print(best)