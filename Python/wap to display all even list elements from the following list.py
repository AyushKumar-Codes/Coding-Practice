list1=[[1,2,3],[4,5,6],[7,8,9]]
for i in list1:
    for j in i:
        print(j,end="")
    print()

n=int(input("Rows:"))
for i in range(1,n+1):
    for j in range(0,i):
        print("*",end="")
    print()