#Q1
data=input()
l=data.split(",")
d=[]
for i in l:
    d.append(int(i))
print("Max: ",max(d))
print("Mix: ",min(d))
print("Difference: ",max(d)-min(d))

#Q2
data=input()
l=data.split(",")
d=[]
sum=0
for i in l:
    d.append(int(i))
for j in d:
    sum=sum+j
print("sum:",sum)

#Q3
d=input("Data1:")
d1=input("Data2:")
l=d.split(",")
l1=d1.split(",")
str1='{'
if len(l)!=len(l1):
    print("lists are different lengths")
    exit()
else:
    for i in range (len(l)):
        str1=str1+"'"+l[i]+"'"+":"+"'"+l1[i]+"'"+","
    print(str1[0:len(str1)-1]+"}")
    d=str1[0:len(str1)-1]+"}"

#Q4
data=input()
d=input()
l=data.split(",")
a=0
for i in l:
    if d==i:
        a=a+1
print("data occurs:",a,"Times")

#Q5
d=input()
d1=input()
l=d.split(",")
l1=d1.split(",")
a=0
for i in l1:
    if i in l:
        a=a+1
if a==len(l1):
    print("Exit")
else:
    print("Doesn't Exit")
