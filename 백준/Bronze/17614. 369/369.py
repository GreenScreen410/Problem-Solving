count = 0
for i in range(1, int(input()) + 1):
    for j in str(i):
        if j == '3' or j == '6' or j == '9':
            count += 1
print(count)