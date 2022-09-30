word= input()
num = int(input())
inde = num+1
leng= len(word)
while True:
    print(word[inde],end='')
    inde += 1
    if inde>=leng: break
    
while num>=0:
    print(word[num],end='')
    num -= 1
