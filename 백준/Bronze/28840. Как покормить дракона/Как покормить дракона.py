h1, m1 = map(int, input().split(":"))
h2, m2 = map(int, input().split(":"))
diff = ((h2 * 60 + m2) + 1440) - (h1 * 60 + m1)
print(f"{diff // 60:02d}:{diff % 60:02d}")