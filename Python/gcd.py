x=int(input("1st Num: "))
y=int(input("2nd Num: "))
if x==0 or y==0:
    print("Value must be non zero")
else:
    if x<y:
        result=x
    else:
        result=y
    while result:
        if x% result==0 and y% result==0:
            break
        result=result-1
print("gcd:",result)