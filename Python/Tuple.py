#It is unmutable is sense of length and edit so its a strict data type
t1=(1,2,3,4,45)
print(t1)#Tuple is also ordered like list (Tuple is considered more faster than List because it is immutable)
print(type(t1))
t1=(1)
print(type(t1))
t1=(1,)
print(type(t1))
str="Python"
print(tuple(str))
#List to Tuple and Tuple to List conversion
a=[1,2,3,45,67,8]
b=(1,3,54,67,8,9)
print(list(b))
print(type(list(b)))
print(tuple(a))
print(type(tuple(a)))

b=(1,2,45,56,[2,3],45,6)
b[4][1]=23
print(b)

t=(1,2,4,5,6,7)
lt=list(t)
lt[3]="Ayush"
print(tuple(lt))

d=input()
l=d.split(",")
t=tuple(l)
print(l)
print(t)

a=(20,40,60,"apple","ball")
t=(1,)
t1=(1)
print(type(t))
print(type(t1))

#Q
d=input()
l=d.split(",")
index=int(input())
t=tuple(l)
print(t)
if len(t)>index and index>=-(len(t)):
    print(t[index])
else:
    print("Enter a valid index")

#Q
mytuple=("this",10.0,"is","float",3.6)
print(mytuple[0])
print(mytuple[1])
print(mytuple[-1])
print(mytuple[0:])
print(mytuple[:-1])
print(mytuple[::-1])

#Q Index of a element in a tuple
data = input("data: ")
list1 = data.split(",")
tuple1 = tuple(list1)
print("tuple:", tuple1)
element = input("element: ")
if element in tuple1:
    index = tuple1.index(element)
    print("index:", index)
else:
    print("enter an element that exists in tuple")
