from math import *
mleft= 0
n,m = map(int,input().split())
while m<=n:
    mleft += 1
    if mleft%m == 0:
        n -= n/m
        n= ceil(n)
print(mleft)
