while True:
    n = int(input())
    if n == -1:
        break

    prev_time = 0
    total_distance = 0
    for _ in range(n):
        s, t = map(int, input().split())
        total_distance += s * (t - prev_time)
        prev_time = t

    print(f"{total_distance} miles")