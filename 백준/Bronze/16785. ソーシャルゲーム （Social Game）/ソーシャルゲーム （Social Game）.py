A, B, C = map(int, input().split())

total_coins_per_week = 7 * A + B
full_weeks = C // total_coins_per_week
additional_days = 0

if C % total_coins_per_week != 0:
    additional_days = (C % total_coins_per_week + A - 1) // A

print(full_weeks * 7 + additional_days)