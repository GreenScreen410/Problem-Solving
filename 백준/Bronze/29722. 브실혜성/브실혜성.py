year, month, day = map(int, input().split("-"))
N = int(input())

total_days = day + N
month += (total_days - 1) // 30
day = (total_days - 1) % 30 + 1

year += (month - 1) // 12
month = (month - 1) % 12 + 1

print(f"{year:04d}-{month:02d}-{day:02d}")