k = list(map(int, list(input())))

if len(k) == 1:
    print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')
    exit(0)

value = int(k[0]) - int(k[1])
for i in range(len(k) - 1):
    if k[i] - k[i+1] != value:
        print('흥칫뿡!! <(￣ ﹌ ￣)>')
        exit(0)

print('◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!')