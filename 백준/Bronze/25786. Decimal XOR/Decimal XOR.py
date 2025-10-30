a = input()
b = input()

max_len = max(len(a), len(b))
result = ""
for i in range(max_len):
    d1 = int(a.rjust(max_len, "0")[i])
    d2 = int(b.rjust(max_len, "0")[i])
    
    if (d1 <= 2 and d2 <= 2) or (d1 >= 7 and d2 >= 7):
        result += "0"
    else:
        result += "9"

print(result)