from itertools import permutations

N = int(input())
S = input()

chars = set(chr(i) for i in range(ord("A"), ord("Z") + 1))
used = set(S)
available = sorted(list(chars - used))

for k in range(len(available) + 1):
    for p in permutations(available, k):
        result = S + "".join(p)
        if abs(sum(2 * (a < b) - 1 for a, b in zip(result, result[1:]))) <= 1:
            print(len(result))
            print(result)
            exit()