T = int(input())

for _ in range(T):
    N, X, Y = map(int, input().split())
    colors = list(map(int, input().split()))

    if (colors[0] == X) and (colors[-1] == Y):
        print("BOTH")
    elif (colors[0] == X):
        print("EASY")
    elif (colors[-1] == Y):
        print("HARD")
    else:
        print("OKAY")