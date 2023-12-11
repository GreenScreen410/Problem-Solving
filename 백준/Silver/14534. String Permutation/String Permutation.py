from itertools import permutations

T = int(input())
for i in range(1, T + 1):
    L = input()

    print(f"Case # {i}:")
    for i in permutations(L, len(L)):
        print("".join(i))