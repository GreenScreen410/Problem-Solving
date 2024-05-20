retake = input()
N = int(input())

count = 0
for _ in range(N):
    subject = input()

    if (retake[:5] == subject[:5]):
        count += 1

print(count)