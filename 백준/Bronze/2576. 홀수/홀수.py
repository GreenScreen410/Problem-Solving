A = []
for _ in range(7):
    A.append(int(input()))
    
sum = 0
for i in A:
    if i % 2 == 1:
        sum += i
    
if sum == 0:
    print('-1')
else:
    print(sum)
    print(min([i for i in A if i % 2 == 1]))