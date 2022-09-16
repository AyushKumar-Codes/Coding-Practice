a=10
b=10
print(a is b)
print(a is not b)
#in IDLE small integers from[-5 to 256] only give the same values like Pycharm
a=3.4
b=3.4
print(a is b)
a="Hello"
b="Hello"
print(a is b)
a=[1,2,3]
b=[1,2,3]
print(a is b)
a={"Prod1":4500,"Prod2":5000,"Prod3":6000}
b={"Prod1":4500,"Prod2":5000,"Prod3":6000}
print(a is b)
#Only Tuples gives the True Value Because it is imutable so they are using same reference location
a=(1,2,3)
b=(1,2,3)
print(a is b)