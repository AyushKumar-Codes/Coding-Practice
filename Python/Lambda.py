x=lambda a:a+10
print(x(5))

x=lambda a,b:a*b
print(x(3,4))

x=lambda a,b,c:a+b+c
print(x(5,6,7))

def myfunc(n):
    return lambda a:a*n
my=myfunc(2)
print(my(11))

def myfunc(n):
    return lambda a:a*n
x=int(input())
my=myfunc(x)
print(my(11))

x=lambda a:(a*20)/100
y=int(input("Please enter your Salary: "))
print("Tax to be paid is",x(y))

x=lambda a:a*2
y=int(input("a: "))
print(x(y))
