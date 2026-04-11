g, s, c = map(int, input().split())

power = g * 3 + s * 2 + c
victory = ""
if power >= 8:
    victory = "Province"
elif power >= 5:
    victory = "Duchy"
elif power >= 2:
    victory = "Estate"

if power >= 6:
    treasure = "Gold"
elif power >= 3:
    treasure = "Silver"
else:
    treasure = "Copper"

if victory:
    print(f"{victory} or {treasure}")
else:
    print(treasure)