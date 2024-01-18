lines = [input().rstrip() for _ in range(6)]
coords = [len(line) for line in lines]
print(f"Latitude {coords[0]}:{coords[1]}:{coords[2]}")
print(f"Longitude {coords[3]}:{coords[4]}:{coords[5]}")