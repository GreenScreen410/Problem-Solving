while True:
    line = input()
    if line == "#":
        break

    words = line.split(" ")
    result = []

    for word in words:
        letters = [c for c in word if c.isalpha()]

        letters = letters[::-1]
        pos = 0
        new_word = ""
        for c in word:
            if c.isalpha():
                if c.isupper():
                    new_c = letters[pos].upper()
                else:
                    new_c = letters[pos].lower()
                new_word += new_c
                pos += 1
            else:
                new_word += c
        result.append(new_word)
        
    print(" ".join(result))