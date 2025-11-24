result = 0
board = [[0] * 100 for _ in range(100)]
for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            if board[i][j] == 0:
                board[i][j] = 1
                result += 1
print(result)