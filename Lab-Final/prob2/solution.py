dnsString = input()

words = []
numbers = []
lengString = len(dnsString)
for w in range(lengString):
    try:
        numbers.append(int(dnsString[w]))
    except:
        words.append(dnsString[w])

words.sort(reverse=True)
numbers.sort()

for p in range(len(words)):
    print(f'{words[p]}{numbers[p]}', end='')