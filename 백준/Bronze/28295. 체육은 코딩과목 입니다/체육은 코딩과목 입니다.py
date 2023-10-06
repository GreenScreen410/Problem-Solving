direction = ["N", "E", "S", "W"]
result = "N"

for _ in range(10):
    t = int(input())
    if t == 1:
        result = direction[(direction.index(result) + 1) % 4]
    elif t == 2:
        result = direction[(direction.index(result) + 2) % 4]
    elif t == 3:
        result = direction[(direction.index(result) + 3) % 4]
print(result)