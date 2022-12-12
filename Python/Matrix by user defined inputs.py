r=int(input("row: "))
c=int(input("column: "))
l=[]
for i in range(r*c):
    y=input()
    l.append(y)
t=0
c1=c
for i in range(r):
    for j in range(t,c1):

            print(l[j],end=" ")
    print()
    c1=c1+c
    t=j+1

#Sparse Matrix Representation
r=int(input("row: "))
c=int(input("column: "))
l=[]
for i in range(r*c):
    y=input()
    l.append(y)
t=0
c1=c
print("Sparse Matrix:")
l1=[]
l2=[]
for i in range(r):
    for j in range(t,c1):
        print(l[j],end=" ")
        l1.append(l1[j])
    l2.append(l1)
    l1=[]
    print()
    c1=c1+c
    t=j+1
