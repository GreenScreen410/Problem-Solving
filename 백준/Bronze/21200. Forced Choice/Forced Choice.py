N, P, S = map(int, input().split())

for _ in range(S):
    data = list(map(int, input().split()))
    if P in data[1:]:
        print("KEEP")
    else:
        print("REMOVE")