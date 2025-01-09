id = input()

weight = [2, 7, 6, 5, 4, 3, 2]
value = 0
for i in range(7):
    value += int(id[i]) * weight[i]

alphabet = ["J", "A", "B", "C", "D", "E", "F", "G", "H", "I", "Z"]
print(alphabet[value % 11])