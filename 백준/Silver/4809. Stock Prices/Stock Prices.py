import sys, heapq
input = sys.stdin.readline

case = 1
while True:
    n, k1, k2 = map(int, input().split())
    if n == k1 == k2 == 0:
        break

    prices = list(map(int, input().split()))
    data = [(prices[i], i + 1) for i in range(n)]

    low = heapq.nsmallest(k1, data, key=lambda x: (x[0], x[1]))
    low_days = sorted(d for _, d in low)

    high = heapq.nlargest(k2, data, key=lambda x: (x[0], x[1]))
    high_days = sorted((d for _, d in high), reverse=True)

    print(f"Case {case}")
    print(*low_days)
    print(*high_days)

    case += 1