front = list(map(int, input().split()))
back = list(map(int, input().split()))

ratios = []
for i, f in enumerate(front, start=1):
    for j, b in enumerate(back, start=1):
        ratios.append((f / b, i, j))

ratios.sort(key=lambda x: (x[0], x[1]))
for i, f, b in ratios:
    print(f"{i:.2f} {f} {b}")