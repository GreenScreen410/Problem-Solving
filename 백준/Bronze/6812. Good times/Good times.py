time = int(input())

h, m = divmod(time, 100)
offsets = [
    ("Ottawa", 0),
    ("Victoria", -180),
    ("Edmonton", -120),
    ("Winnipeg", -60),
    ("Toronto", 0),
    ("Halifax", 60),
    ("St. John's", 90),
]

for city, diff in offsets:
    hh, mm = divmod((h * 60 + m + diff) % (24 * 60), 60)
    print(f"{hh * 100 + mm} in {city}")