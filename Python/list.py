'''
list is mutable data type means data can be changeable
eg. x=[1,2,3,4]
x.append(5) is use to add element at the end of the list.
'''
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
