w=int(input())
x=0
while x<w:
    print(x+1)
    x=x+1
#Odd Number between 1 to 100
x=1
while x<=100:
    if(x%2!=0):
        print(x)
    x=x+1

n=int(input())
x=1
while x<=n:
    if(x%2==0):
        print(x)
    x=x+1
x=200
while x<=1000:
    if(x%5==0):
        print(x**2)
    x=x+1
n=int(input())
x=1
while x<=n:
    if(x%3==0):
        print(x**2)
    else:
        print(x**3)
    x=x+1
n=int(input("num: "))
x=1
while x<=n:
    if(x%2==0):
        print(x+1)
    x=x+1
#Addition Operation Inside a Loop
#print sum of all numbers till n numbers
n=int(input("Num:"))
i=1
sum=0
while i<=n:
    sum=sum+i
    i=i+1
print("sum:",sum)

n=int(input("Num:"))
i=1
sum=0
while i<=n:
    if(i%5==0):
        sum=sum+i
    i=i+1
print("sum:",sum)

n=int(input("Num:"))
i=1
sum=1
while i<=n:
    if(i%5==0):
        sum=sum*i
    i=i+1
print("Product:",sum)


