n = int(input())

for _ in range(n):
    s = input()
    result = ""
    
    for i in range(len(s)):
        c = s[i]
        
        if c.isupper():
            if i > 0:
                result += "_"
            result += c.lower()
        else:
            result += c
            
    print(result)