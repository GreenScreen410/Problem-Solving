S = input()

if "-x" in S:
    S = S.replace("-x", "-1x")

if "x" in S:
    if S[0] == "x":
        print(1)
    else:
        S = S.split("x")
        print(S[0])
else:
    print(0)