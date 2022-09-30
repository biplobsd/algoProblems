word = input()
for count in word:
    ascii= ord(count)+1
    if count== 123: count=97
    print(chr(count),end='')
