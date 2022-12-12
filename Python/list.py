'''
list is mutable data type means data can be changeable
eg. x=[1,2,3,4]
x.append(5) is use to add element at the end of the list.
'''
l1=[]#It is use for Empty List
l1=list()#It is use for Empty List
l1=[1,2,3]
l2=["abc","pqr",1,3.14]
print(l1)
print(l2)
print(l2+l2)
print(l1,l2)
print(l1*3)
print(l2*6)
print(l2[2])
print(l1[0])
l=["Ayush","K22PB",12212470,]
print("The section of Student =",l[1])
l1=["Ayush","K22PB",12212470]
L2=["Sumit","k22pb",12212458]
l3=["Aditya","K22PB",12212470]
print("The roll numbers of students are: ",l1[2],L2[2],l3[2])
l5=[44,45,46,47,48,49,50]
print(l5[1:])
print(l5[-6:])
print(l5[1:5])
print(l5[2:3])
print(l5[2:])
print(l5[:6])
l1=[1,[11,22,33],"abc",145.70]
print(l1)#List is ordered so it will print in order in which you have stored
print(l1[1][1])
l6=["Ayush",12212470,[800001,122,"Singh's Mention","Shivam vihar Colony Road","Patna","Bihar","Hindustan"],10000,[1,11,2003]]
print(l6[2][0],l6[2][1],l6[2][2],l6[2][3],l6[2][4],l6[2][5],l6[2][6])
print(l6[2][1])
print(l6[2][2])
print(l6[2][3])
print(l6[2][4])
print(l6[2][5])
print(l6[2][6])
print("Date of Birth of Employee is",l6[4][0],"\b-",l6[4][1],"\b-",l6[4][2])
str="Python"
print(list(str))

#converting string into list
l=list("Ayush")
print(l)
l=list(("ayush","sanvitkar"))
print(l)
# l=list("Ayush","List")#This will give no output
# print(l)
l=list((1,2,3,4,5,6))
print(l)

# Question
data=input("data: ")
print("type of data",type(data))
list1=data.split()
print(list1)
print("type of list:",type(list1))

#Question
data=input("data: ")
print("type of data",type(data))
list1=data.split(",")
print(list1)
print("type of list:",type(list1))

#Questions
l=["Python",100,"list",8.8,"A","Program"]
print(l)
print(type(l))

'''List property
1. Indexing
2. slicing
3. concatenation
l=[1,2,34,54]
l1=[3,54,5,66,4]
print(l+l1)
4. Updating
l=[1,2,34,54]
l[2]=550
print(l)
5. Membership
6.comparison ==,<=,>=,!= (Sequence should also Match)
l=[1,2,34,54]
l2=[1,2,34]
print(l==l2)
print(l!=l2) 
7. Repetition
print(l*0) (empty list)
print(l*3)'''

#Question
d=input()
l=d.split(",")
print(l)
f=int(input())
if ((f>0) and (len(l)-1),f ) or ((f<0) and f<(-(len(l)-1))):
    print("invalid")
else:
    print(l[f])
#Appending list
c=["a","v","s","w"]
c.append([2,354,5])
print(c)

#Extending list
c=["a","v","s","w"]
c.extend([2,354,5])
print(c)
c=["a","v","s","w"]
d=[2,3,4,"SSDDF"]
c.extend(d)
print(c)

#Question
list1=["hi","hello","lists"]
for i in list1:
    print(i)
list1[2]="python"
print(list1)
list1.append("code is life")
print(list1)
list1.extend([46,67,85])
print(list1)

#Question
d=input()
l=d.split(",")
x=input()
print(x in l)

#Question'
x=input()
l=x.split(",")
if l[0]=="3" or l[-1]=="3":
    print("True")
else:
    print("False")
#aliasing id remains same
a=[1,2,3,4,5,6]
b=a
print(a)
print(b)
print(b is a)
print(a is b)
print(a[0])
a[0]=100
print(a)
print(b)
# List Cloning id is not same
a=[1,2,3,4,5,6]
b=a[:]
print(b)
print(a is b)
print(id(a),id(b))
a=[1,2,3,4,5]
b=a.copy()
print(b)
print(a is b)
a=input()
b=input()
l1=a.split(",")
l2=a.split(",")
print((l1[-1] is l2[-1]) or (l1[0] is l2[0]))
dl=[1,2,3,4,5,6,7]
print(dl)
del dl[5]
print(dl)
del dl[2:]
print(dl)
# del dl
# print
rl=[1,2,3,4,5,66,5,7]
rl.remove(5)#Only first occurence is removed in  list
print(rl)
#pop deletes all the elements and only return last element
pl=[1,2,3,4,5,5,6]
print(pl.pop())
print(pl.pop(-1))

x=input()
l=x.split(",")
p=[]
for i in l:
    if i not in p:
        p.append(i)
print(p)

#It give true if any values are true and gives false when any value is false or 0
l=[1,2,4,5,5,6]
l1=[1,2,0,5]
l2=[]
l3=[4,"vvvvvvvn",False,5,6," "]
print(all(l))
print(all(l1))
print(all(l2))
print(all(l3))
#It give true if all values are true and gives false when any value is false or 0
l=[1,2,4,5,5,6]
l1=[1,2,0,5]
l2=[]
l3=[4,"vvvvvvvn",False,0,0,0]
print(any(l))
print(any(l1))
print(any(l2))
print(any(l3))
#It give tuple of a with index and the element
print(list(enumerate(["a","b","c","d","e"])))
#convertion fro other data type to list
print(list("abcdef"))
print(list(("a","b","c","d","e")))
#Its will give the maximum value or for strings it check for ASCII Code
print(max[1,2,3,4,4556,56,567,5,6,56])
print(max[a,fdss,sd,f,f,z])
#Its will give the minimum value or for strings it check for ASCII Code
print(min[1,2,3,4,4556,56,567,5,6,56])
print(min[a,fdss,sd,f,f,z])
# Arrange list element asending order
l=[1,2,4,5,76,78,7,8]
sl=sorted(l)
print(l)
print(sl)

#It is use to add element to a particular index
x=[1,2,3,4,5,56,"a","s"]
y=[1,2]
x.insert(len(x),"e")
x.insert(0,"e")
y.insert(3,"e") #if index is higher than list index then the given element will repeat till that index
print(x)
print(y)

x=[1,2,3,4,5,6,7,8]
x.sort(key=None ,reverse=True)
print(x)
x.reverse()
print(x)
# Copy is similar to "[:]"
x=["z","f",5,6,7,7,8]
y=x.copy()
print(y)
print(x is y)
#Clear function gives None
h=[1,2,4,6,7,8]
print(h.clear())






