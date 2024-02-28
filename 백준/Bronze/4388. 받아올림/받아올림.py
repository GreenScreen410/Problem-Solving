def count_carry(a, b):
    carry = 0
    carry_count = 0

    while a > 0 or b > 0:
        total = a % 10 + b % 10 + carry
        if total >= 10:
            carry = 1
            carry_count += 1
        else:
            carry = 0

        a //= 10
        b //= 10
    return carry_count

while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    print(count_carry(a, b))