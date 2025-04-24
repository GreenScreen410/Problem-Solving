K = int(input())

for x in range(1, K + 1):
    s, t = map(int, input().split())

    total = [0] * (s + 1)
    for _ in range(t):
        si, pi = map(int, input().split())
        total[si] += pi

    suspect = None
    for i in range(1, s + 1):
        if all(total[i] > 2 * total[j] for j in range(1, s + 1) if j != i):
            suspect = i
            break

    print(f"Data Set {x}:")
    if suspect is not None:
        print(suspect)
    else:
        print("No suspect.")
    print()