x=int(input("Upto: "))
import math
p=math.pi
for i in range(1,x+1):
    print("{:.{}f}".format(p,i))