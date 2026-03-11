moves = input()

small, big = 1, 4
swap_map = {
    "A": (1, 2),
    "B": (1, 3),
    "C": (1, 4),
    "D": (2, 3),
    "E": (2, 4),
    "F": (3, 4),
}

for m in moves:
    x, y = swap_map[m]
    if small == x:
        small = y
    elif small == y:
        small = x
    if big == x:
        big = y
    elif big == y:
        big = x

print(small)
print(big)