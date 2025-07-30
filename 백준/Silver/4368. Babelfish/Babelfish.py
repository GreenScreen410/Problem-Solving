m = {}

while True:
    line = input()
    if line == "":
        break
    
    word, foreign_word = line.split()
    m[foreign_word] = word

while True:
    try:
        word = input()
        if not word in m:
            print("eh")
        else:
            print(m[word])
    except EOFError:
        break