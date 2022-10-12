def factorial(x):
    fact=1
    if x<0:
        return-1
    elif x==0:
        return 0
    else:
        for i in range(1,x+1):
            fact=fact*i
        return fact
a=int(input("Enter no: "))
result=factorial(a)
if result==-1:
    print("Factorial of -ve no. not possible")
elif result==0:
    print("Factorial is 1")
else:
    if result %3==0:
        print("Returned factorial is a multiple of 3")
    else:
        print("Not a multiple")
