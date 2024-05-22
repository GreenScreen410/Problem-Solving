s1, s2 = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(s1)]
b = [list(map(int, input().split())) for _ in range(s2)]

for i in range(s1):
    if a[i][0] != a[i][1]:
        print("Wrong Answer")
        exit()
for i in range(s2):
    if b[i][0] != b[i][1]:
        print("Why Wrong!!!")
        exit()

print("Accepted")