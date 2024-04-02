n = int(input())

for _ in range(n):
    s = input()
    
    vowels = "aeiou"
    vowel_count = 0
    consonant_count = 0

    for i in s:
        if i.isalpha():
            if i in vowels:
                vowel_count += 1
            else:
                consonant_count += 1
    
    print(s)
    print(int(vowel_count > consonant_count))