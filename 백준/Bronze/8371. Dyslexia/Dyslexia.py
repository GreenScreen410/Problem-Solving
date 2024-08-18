n = int(input())
original = input()
pupil = input()

count = 0
for i in range(n):
    if original[i] != pupil[i]:
        count += 1
        
print(count)