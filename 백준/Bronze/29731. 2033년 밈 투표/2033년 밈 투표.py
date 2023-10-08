N = int(input())
for _ in range(N):
    S = input()
    
    if S == "Never gonna give you up" or S == "Never gonna let you down" or S == "Never gonna run around and desert you" or S == "Never gonna make you cry" or S == "Never gonna say goodbye" or S == "Never gonna tell a lie and hurt you" or S == "Never gonna stop":
        continue
    else:
        print("Yes")
        exit()
print("No")
