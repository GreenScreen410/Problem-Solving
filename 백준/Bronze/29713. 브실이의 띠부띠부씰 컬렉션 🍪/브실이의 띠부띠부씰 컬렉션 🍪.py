N = int(input())
S = input()

if S.count("B") > 0 and S.count("R") > 0 and S.count("O") > 0 and S.count("N") > 0 and S.count("Z") > 0 and S.count("E") > 0 and S.count("S") > 0 and S.count("I") > 0 and S.count("L") > 0 and S.count("N") > 0 and S.count("V") > 0:
    print(min(S.count("R") // 2, S.count("E") // 2))
else:
    print(0)