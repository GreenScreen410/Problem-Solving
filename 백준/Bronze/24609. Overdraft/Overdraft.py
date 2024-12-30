n = int(input())

transactions = []
for _ in range(n):
    transactions.append(int(input()))

min_balance = 0
current = 0
for i in transactions:
    current += i
    
    if current < min_balance:
        min_balance = current

print(abs(min_balance))