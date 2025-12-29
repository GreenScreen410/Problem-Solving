while True:
    N, M = map(int, input().split())
    if N == 0 and M == 0:
        break

    packets = []
    for _ in range(M):
        t, s, d = map(int, input().split())
        packets.append((t, s, d))
    packets.sort(key=lambda x: x[0])

    infected = [False] * (N + 1)
    infected[1] = True

    for t, s, d in packets:
        if infected[s]:
            infected[d] = True

    print(sum(infected))