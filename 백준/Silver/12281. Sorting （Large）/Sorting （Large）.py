T = int(input())

for X in range(1, T + 1):
    N = int(input())
    s = list(map(int, input().split()))

    odd = []
    even = []
    for num in s:
        if num % 2 == 0:
            even.append(num)
        else:
            odd.append(num)

    odd.sort()
    even.sort(reverse=True)

    odd_index = 0
    even_index = 0
    print(f"Case #{X}:", end=" ")
    for num in s:
        if num % 2:
            print(odd[odd_index], end=" ")
            odd_index += 1
        else:
            print(even[even_index], end=" ")
            even_index += 1
    print()