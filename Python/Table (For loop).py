'''x=int(input("Table of number : "))
y=int(input("Enter Limit: "))
i=1
if y>20:
    for i in range(1,21):
        print(x,"*",i,"=",x*i)
    else:
        print("rows is limited to 20")
else:
    for i in range (1,y+1):
        print(x,"*",i,"=",x*i)'''
x=int(input("X : "))
m=int(input("Y : "))
for i in range(1,m+1):
    if (i==21):
        print("rows is limited to 20")
        break
    print("{} X {} = {}".format(x,i,x*i))

