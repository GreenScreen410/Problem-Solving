N, M = map(int, input().split())
time = int(M / N * 24 * 60)
print(f"{time // 60:02d}:{time % 60:02d}")