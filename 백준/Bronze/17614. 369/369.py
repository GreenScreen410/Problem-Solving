count = 0
for i in range(1, int(input()) + 1):
    if str(i).count('3') or str(i).count('6') or str(i).count('9'):
        count += str(i).count('3') + str(i).count('6') + str(i).count('9')
print(count)