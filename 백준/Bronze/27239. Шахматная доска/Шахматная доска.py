n = int(input())
print("abcdefgh"[(n - 1) % 8] + str((n + 7) // 8))