A, B, C = map(int, input().split())

coins = 0
days = 0
while coins < C:
    days += 1
    coins += A
    if days % 7 == 0:
        coins += B

print(days)