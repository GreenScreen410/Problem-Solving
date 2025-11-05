N = int(input())
before = input()
after = input()

if N % 2 == 0:
    expected = before
else:
    expected = "".join("1" if i == "0" else "0" for i in before)

if expected == after:
    print("Deletion succeeded")
else:
    print("Deletion failed")