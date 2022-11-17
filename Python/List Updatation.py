#Changing Multiple Element
x=[1,2,3,4,5]
x[0:3]=[100,100,100]
print(x)
x=[1,2,3,4,5]
x[0:0]=[100,100,100]
print(x)
x=[1,2,3,4,5]
x[1:1]=[100,100,100]
print(x)
#Question
x=input()
l=x.split(",")
print(l)
y=int(input())
z=input()
if (y>0 and y>len(l)-1) or (y<0 and y<-len(l)):
    print("not in range")
else:
    l[y]=z
    print(l)


