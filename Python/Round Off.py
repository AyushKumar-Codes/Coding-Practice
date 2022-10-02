import math
num=float(input("Enter Number: "))
if num-int(num)>=0.5:
    print("Round Off is:",math.ceil(num))
else:
    print("Round Off is:",math.trunc(num))