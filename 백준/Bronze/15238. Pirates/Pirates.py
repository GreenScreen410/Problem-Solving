N = int(input())
S = input()

most = max(set(S), key=S.count)
print(most, S.count(most))