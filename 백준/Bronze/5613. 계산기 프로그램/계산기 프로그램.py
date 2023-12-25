first = int(input())

while 1:
    op = input()
    
    if op == "=":
        break

    second = int(input())
    if op == "+":
        first += second;
    elif op == "-":
        first -= second;
    elif op == "*":
        first *= second;
    elif op == "/":
        first //= second;

print(first)