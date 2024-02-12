start, end, number = map(int, input().split())
print("".join(str(i) for i in range(start, end + 1)).count(str(number)))