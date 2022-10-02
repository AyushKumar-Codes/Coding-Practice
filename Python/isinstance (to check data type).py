#isinstance is use to check the data type in boolean form(True or False)
x=eval(input("Enter integer or float: "))
print("It is Integer",isinstance(x,int))
print("It is Float",isinstance(x,float))
x=input("Enter a string: ")
print("It is String",isinstance(x,str))
x=complex(input("Enter Complex: "))
print("It is Complex",isinstance(x,complex))

