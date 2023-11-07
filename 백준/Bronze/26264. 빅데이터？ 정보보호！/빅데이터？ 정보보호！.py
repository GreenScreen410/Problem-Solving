N = int(input())
S = input()

bigdata = S.count('bigdata')
security = S.count('security')
if security < bigdata:
    print('bigdata?')
elif security > bigdata:
    print('security!')
else:
    print('bigdata? security!')