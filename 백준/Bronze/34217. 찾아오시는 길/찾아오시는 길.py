A, B = map(int, input().split())
C, D = map(int, input().split())

if A + C == B + D:
    print("Either")
elif A + C < B + D:
    print("Hanyang Univ.")
else:
    print("Yongdap")