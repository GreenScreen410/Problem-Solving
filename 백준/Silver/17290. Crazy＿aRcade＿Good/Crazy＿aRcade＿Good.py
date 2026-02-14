r, c = map(int, input().split())
board = [input() for _ in range(10)]

bomb_rows = set()
bomb_cols = set()
for i in range(10):
    for j in range(10):
        if board[i][j] == "o":
            bomb_rows.add(i + 1)
            bomb_cols.add(j + 1)

min_moves = float("inf")
for i in range(1, 11):
    if i in bomb_rows:
        continue
    for j in range(1, 11):
        if j in bomb_cols:
            continue
        min_moves = min(min_moves, abs(r - i) + abs(c - j))

print(min_moves)