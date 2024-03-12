n = int(input())

temperature, oxygen, ocean = -30, 0, 0
for _ in range(n):
    source, amount = input().split()
    
    if source == "temperature":
        temperature += int(amount[1:])
    elif source == "oxygen":
        oxygen += int(amount[1:])
    elif source == "ocean":
        ocean += int(amount[1:])
        
if temperature >= 8 and oxygen >= 14 and ocean >= 9:
    print("liveable")
else:
    print("not liveable")