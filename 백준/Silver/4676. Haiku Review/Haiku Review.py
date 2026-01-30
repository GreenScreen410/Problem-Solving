while True:
    line = input()
    if line == "e/o/i":
        break
    
    parts = line.split("/")
    result = "Y"
    
    for i in range(3):
        count = 0
        
        words = parts[i].split()
        for word in words:
            is_prev_vowel = False
            for char in word:
                if char in "aeiouy":
                    if not is_prev_vowel:
                        count += 1
                    is_prev_vowel = True
                else:
                    is_prev_vowel = False
        
        if count != [5, 7, 5][i]:
            result = str(i + 1)
            break
            
    print(result)