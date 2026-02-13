from math import hypot

xA, yA, xB, yB, xC, yC = map(int, input().split())
if (xB - xA) * (yC - yA) == (yB - yA) * (xC - xA):
    print(-1.0)
else:
    perimeters = []
    perimeters.append(2 * (hypot(xA - xB, yA - yB) + hypot(xA - xC, yA - yC)))
    perimeters.append(2 * (hypot(xA - xB, yA - yB) + hypot(xB - xC, yB - yC)))
    perimeters.append(2 * (hypot(xA - xC, yA - yC) + hypot(xB - xC, yB - yC)))
    print(max(perimeters) - min(perimeters))