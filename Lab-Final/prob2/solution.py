dnsString = input()

words = []
numbers = []
for c in range(len(dnsString)):
    try:
        numbers.append(int(dnsString[c]))
    except ValueError:
        words.append(dnsString[c])

numbers.sort()
words.sort(reverse=True)

for _ in range(len(words)):
    print(f'{words[_]}{numbers[_]}', end='')
