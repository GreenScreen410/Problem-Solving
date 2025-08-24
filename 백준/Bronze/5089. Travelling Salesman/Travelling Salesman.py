week = 1
while True:
    N = int(input())
    if N == 0:
        break

    s = []
    for _ in range(N):
        s.append(input())

    print(f"Week {week} {len(set(s))}")

    week += 1