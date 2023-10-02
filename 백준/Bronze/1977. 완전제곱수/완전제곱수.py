M = int(input())
N = int(input())

power = []
for i in range(M, N + 1):
    if int(i ** 0.5) ** 2 == i:
        power.append(i)
    
if len(power) == 0:
    print("-1")
    exit()
else:    
    print(sum(power))
    print(min(power))