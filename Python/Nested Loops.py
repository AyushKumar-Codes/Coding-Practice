#Printing Stars Pattern
for i in range(1,6):
    for j in range(1,6):
        print("*",end="")
    print()

n= int(input("Enter no. of rows= "))
for i in range (1,i+1):
    for j in range(1,i+1):
        print("*",end="")
    print()

n= int(input("Enter no. of rows= "))
for i in range (n,0,-1):
    for j in range(1,i+1):
        print("*",end="")
    print()

n=int(input("Enter no of rows= "))
for i in range (n,0,-1):
    for j in range (1,i+1):
        print(i,end="")
    print()

val=65
n=int(input("Enter no. of rows:"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(chr(val),end="")
        val=val+1
    val=65
    print()

val=97
n=int(input("Enter no. of rows:"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(chr(val),end="")
        val=val+1
    val=97
    print()