R = input()
E = input()

result = R
while True:
    try:
        result += input()
    except EOFError:
        break

print(eval(result))