def is_vowel(c):
    return c in "aeiou"

def check(s):
    if not any(is_vowel(c) for c in s):
        return False

    for i in range(len(s) - 2):
        if is_vowel(s[i]) and is_vowel(s[i + 1]) and is_vowel(s[i + 2]):
            return False
        if not is_vowel(s[i]) and not is_vowel(s[i + 1]) and not is_vowel(s[i + 2]):
            return False

    for i in range(len(s) - 1):
        if s[i] == s[i + 1] and s[i] not in "eo":
            return False

    return True

while True:
    s = input()
    if s == "end":
        break
    
    if check(s):
        print(f"<{s}> is acceptable.")
    else:
        print(f"<{s}> is not acceptable.")