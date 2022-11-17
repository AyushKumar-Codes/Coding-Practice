# def helloworld():
#     print("Hello World")
#     print("Good Morning")
#     print("Have a nice day")
#     print("The Function Ends")
# helloworld()

def add(x,y):
    print(x+y)
def sub(x,y):
    print(x-y)
def mul(x,y):
    print(x*y)
a=int(input("x: "))
b=int(input("y: "))
add(a,b)
sub(a,b)
mul(a,b)
print(mul(a,b))#If we print the fuction which already has print function it will print the output with "None"


def addavg(a,b):
    sum1=a+b
    avg=sum1/2
    return sum1,avg
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
a=int(input("a: "))
b=int(input("b: "))
r1,r2=adavg(a,b)
print("sum,average:",addavg(a,b))
print("substraction",sub(a,b))
print("multiplication",mul(a,b))
