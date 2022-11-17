# Fritful function means which has return function
def lar(a,b,c):
    if a>b and a>c:
        return a
    elif b>a and b>c:
        return b
    else:
        return c
num1=int(input("Please enter a value for num1: "))
num2=int(input("Please enter a value for num2: "))
num3=int(input("Please enter a value for num3: "))
result=lar(num1,num2,num3)
print("Largest of the values entered is",result)

def gcd(x,y):
    if x>y:
        small=y
    else:
        small=x
    for i in range(1,small+1):
        if (x%i==0 and y%i==0):
            gcd=i
    return gcd
a=int(input("x: "))
b=int(input("y: "))
print(gcd(a,b))