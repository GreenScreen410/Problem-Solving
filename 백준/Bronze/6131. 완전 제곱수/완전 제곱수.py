N = int(input())

count = 0
for A in range(1, 501):
    for B in range(1, 501):
        if A ** 2 == B ** 2 + N:
            count += 1
            
print(count)