mark=int(input())
if 93<=mark<=100:
    print('A')
if 90<=mark<=92:
    print('A-')
if 87<=mark<=89:
    print('B+')
if 83<=mark<=86:
    print('B')
if 80<=mark<=82:
    print('B-')
if 77<=mark<=79:
    print('C+')
if 73<=mark<=76:
    print('C')
if 70<=mark<=72:
    print('C-')
if 67<=mark<=69:
    print('D+')
if 60<=mark<=66:
    print('D')
if 0<=mark<=59:
    print('F')
if 0>mark or mark>100:
    print('Invalid')
