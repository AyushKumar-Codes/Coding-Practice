list1=[[1,2,3],[4,5,6],[7,8,9]]
for i in list1:
    for j in i:
        print(j,end="")
    print()

matrix=[[1,2,3,4],[5,6,7,8],[3,10,11,12]]
matrix1=[[0,0,0],[0,0,0],[0,0,0],[0,0,0]]
print("matrix:",matrix)
for i in range(3):
    for j in range (4):
        matrix1[j][i]=matrix[i][j]
print("transposed:",matrix1)

n=int(input("Rows:"))
for i in range(1,n+1):
    for j in range(0,i):
        print("*",end="")
    print()