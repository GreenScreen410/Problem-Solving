x_list = []
y_list = []

N = int(input())
for _ in range(N):
    x, y = map(int, input().split())
    x_list.append(x)
    y_list.append(y)

print((max(x_list) - min(x_list)) * (max(y_list) - min(y_list)))