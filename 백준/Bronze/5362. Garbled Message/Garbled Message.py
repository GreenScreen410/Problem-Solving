while True:
    try:
        line = input()
        line = line.replace("iiing", "th")
        print(line)
    except EOFError:
        break