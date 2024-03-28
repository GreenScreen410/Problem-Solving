def count_login_sequences(pass1, pass2):
    possibilities_per_digit = [0, 0, 0, 0]
    
    for i in range(4):
        if pass1[i] == pass2[i]:
            possibilities_per_digit[i] = 1
        else:
            possibilities_per_digit[i] = 2
    
    total_combinations = 1
    for possibilities in possibilities_per_digit:
        total_combinations *= possibilities
    
    return total_combinations

s1 = input()
s2 = input()
print(count_login_sequences(s1, s2))
