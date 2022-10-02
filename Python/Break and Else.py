'''i=100
while(i>100):
    print("Print message on true condition")
else:
    print("Print message on false condition")

i=1
while(i<10):
    if(i==2):
        break
    print(i)
    i=i+1
else:
    print("Printing message on false condition")'''
x=int(input("num: "))
i=0
sum=0
while i<=x:
    sum=sum+i
    i=i+1
else:
    while(x<=0):
        sum=sum+x
        x=x+1
print("Sum:",sum)
