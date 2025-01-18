N = int(input())
S = input()

for i in S:
    if i == "J":
        print("O", end="")
    elif i == "O":
        print("I", end="")
    elif i == "I":
        print("J", end="")