try:
    x,y=eval(input("Enter 2 no. with comma: "))
    result=x/y
    print("Result is",result)
except ZeroDivisionError:
    print("Division by zero")
except SyntaxError:
    print("A comma may be missing in the input")
except:#This will take all the execption
    print("Somthing Wrong in input")
else:#If no exception occured in the except block then else part is except
    print("No exception")
finally:# After the execution of the try code this will be executed
    print("The finally clause is executed")
try:
    a=int(input("a: "))
    b=int(input("b: "))
    c=a+b
    d=a/b
    e=a*b
    # print(x) #For name error uncomment it
    print("try sucessful")
except ZeroDivisionError:
    print("Division by zero")
except NameError:
    print("name error occurred")
except Exception:
    print("Exception Occured")

try:
    a=int(input("a: "))
    b=eval(input("b: "))
    c=a+b
    d=a/b
    e=a*b
    # print(x) #For name error uncomment it
    print("try sucessful")
except ZeroDivisionError:
    print("Division by zero")
except NameError:
    print("name error occurred")
except Exception:
    print("Exception Occured")

# IndexError
a=[10,20,30,40,50]
try:
    x=int(input("Enter Index"))
    print("Number at index {} is {}".format(x,a[x]))
except IndexError:
    print("index is out of range")
except ValueError:
    print("index should be an integers")

#KeyError
m={"Rahul":50,"Harsh":60,"Suresh":70}
name=input("Enter name: ")
try:
    print("marks:",m[name])
except KeyError:
    print("name {} not in the list".format(name))
print("end of program")

#File not exit IOError
try:
    fh=open("tesfile","r")
    fh.write("Ayush")
except IOError:
    print("Error: Can't Find file or read data")
else:
    print("Content Written Successfully")

#Raise method for creating exception and try
def checkage(age):
    if age < 0:
        raise ValueError("age should be greater than or equal to zero")
    print("age is valid")
try:
    age= int(input("age: "))
    checkage(age)
except ValueError as err:
    print(err.args)#.args is for printing instance attribute in the form tuple
finally:
    print("executed in any condition")

#Type Error
try:
    a=5
    b="0"
    print(a+b)
except TypeError:
    print("unsupported operation")
print("Out of try except")

#Defining a class
def iss(a):
    if (type(a)!=str):
        raise TypeError("a has to be str")
    if (not a):
        raise ValueError("a cannot be null")
    x=len(a.strip())
    if (x==0):
        return False
    return True
try:
    a=1
    # a="aa"
    print("isstringEmpty",iss(a))
except ValueError as e:
    print("ValueError raised",e)
except TypeError as e:
    print("Type error raised",e)

