'''n=int(input("Fibonacci Series Upto how Long: "))
x=0
y=1
i=1
while i<=n:
    print(x,end="")
    res=x+y
    x=y
    y=res
    i=i+1'''
#Fibonacci series up to a number and sum of even elements
n=int(input("\nFibonacci Series Up to : "))
x=0
y=1
i=0
sum=0
while True:
    if x>n:
        break
    if i%2==0:
        sum=sum+x
    print(x)
    r=x+y
    x=y
    y=r
    i=i+1
print("sum of even elements:",sum)













































