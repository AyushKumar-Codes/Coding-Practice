'''a=int(input("Enter a number:"))
i=str(a)
y=0
for x in i:
    y=y+int(x)
print(y)'''

n=int(input("Enter number :"))
sum=0
rem=0
while n>0:
    rem=n%10
    sum=sum+rem
    n=n//10
print("Sum of digit of a number :",sum)


