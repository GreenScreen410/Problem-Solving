def find_champernowne_word(n):
    champernowne = ""
    for i in range(1, 10 ** 9):
        champernowne += str(i)
        if int(champernowne) == n:
            return i
        elif int(champernowne) > n:
            break
    return -1

n = int(input())
print(find_champernowne_word(n))