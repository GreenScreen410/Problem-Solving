T = int(input())
for _ in range(T):
    C, P = map(int, input().split())
    
    prices = {}
    for _ in range(C):
        name, S, M, L = input().split()
        prices[name] = {"small": int(S), "medium": int(M), "large": int(L)}
    
    orders = []
    for _ in range(P):
        person, size, coffee = input().split()
        cost = prices[coffee][size] + 100 // P
        if cost % 5 == 1:
            cost -= 1
        elif cost % 5 == 4:
            cost += 1
        orders.append((person, cost))
    
    for person, cost in orders:
        print(person, cost)