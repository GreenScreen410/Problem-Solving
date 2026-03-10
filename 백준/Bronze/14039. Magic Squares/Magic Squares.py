matrix = [list(map(int, input().split())) for _ in range(4)]

for row in matrix:
    if sum(row) != sum(matrix[0]):
        print("not magic")
        exit()

for col in range(4):
    if sum(matrix[row][col] for row in range(4)) != sum(matrix[0]):
        print("not magic")
        exit()

print("magic")