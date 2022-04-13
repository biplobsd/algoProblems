arraySize = int(input())
arraySorted = sorted(input().split(), key=lambda x: int(x), reverse=True)
capSize = int(input())

busCapL = []
isAllcheck = True
for p in arraySorted:
    for i, j in enumerate(busCapL):
        if int(p)+j <= capSize:
            busCapL[i] += int(p)
            isAllcheck = False
            break
    
    if isAllcheck:
        busCapL.append(int(p))
    
    isAllcheck = True

print(len(busCapL))
