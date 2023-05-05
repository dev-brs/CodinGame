import sys
import math

n = int(input())  # the number of temperatures to analyse
closest=5527

for i in input().split():
    t = int(i)
    
    if(abs(t)<abs(closest)):
        closest=t
    elif(abs(t)==abs(closest)):
        if((t and closest)<0):
            closest=t
        else:
            closest=abs(closest)
if(closest==5527):
    print("0")
else:
    print(closest)