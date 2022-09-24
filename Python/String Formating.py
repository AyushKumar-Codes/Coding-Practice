x=int(input("X:"))
y=float(input("Y:"))
print("{:4}".format(x))#This Code For giving 4 spaces
print("{0:.4f}".format(y))#This code is for printing upto 4 decimal places
name="Ayush"
last="Kumar"
print("Hello, %s" % name,"%s !"%last)
print("hello %s %s"%(name,last))
a=10
b=20
print("THe value of a= %d , b = %d and str= %s"%(a,b,name))
print("%x"%a)
print("print leading spaces and decimal 0 %8d"%a)
print("print leading spaces and decimal 0 %-5d"%a)
print("print leading spaces and decimal 0 %06d"%a)
print("print leading spaces and decimal 0 %-08d"%a)
a=123
print("%2d"%a)#if the width specified is less than the width of stored data
s="Hello"
print("%10s"%s)
print("%-10s Ayush"%s)
print("%10.2s"%s)
<0