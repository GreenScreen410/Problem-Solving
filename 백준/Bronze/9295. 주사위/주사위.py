T = int(input())
for x in range(1, T + 1):
    dice1, dice2 = map(int, input().split())
    print(f"Case {x}: {dice1 + dice2}")