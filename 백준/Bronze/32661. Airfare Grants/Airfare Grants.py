N = int(input())

tickets = []
for _ in range(N):
    P = int(input())
    tickets.append(P)

result =  min(tickets) - max(tickets) // 2
if result < 0:
    print(0)
else:
    print(result)