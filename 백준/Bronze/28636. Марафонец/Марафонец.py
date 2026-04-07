n = int(input())

total = 0
for _ in range(n):
    time = input()
    mm, ss = map(int, time.split(":"))
    total += (mm * 60) + ss

print(f"{total // 3600:02d}:{(total % 3600) // 60:02d}:{(total % 3600) % 60:02d}")