N = int(input())
P = int(input())
sale = [0]

if N >= 5 :
    sale.append(500)
if N >= 10 :
    sale.append(P // 10)
if N >= 15 :
    sale.append(2000)
if N >= 20 :
    sale.append(P // 4)

result = P - max(sale)
if result < 0:
    result = 0

print(result)