all_cards = {f"{c} {value}" for c in "SBVK" for value in range(1, 14)}
cards = {input() for _ in range(51)}
print((all_cards - cards).pop())