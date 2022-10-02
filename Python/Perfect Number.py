# Perfect numbers are sum of its factors equal to that number
# n=int(input("n:"))
# l=[]
# for i in range(1,n):
#     if(n%i==0):
#         l.append(i)
# print("Factors:",l)
# sum=0
# for i in l:
#     sum=sum+i
# if sum==n:
#     print("Perfect Number")
# else:
#     print("Not Perfect Number")

# wap to display all perfect number from n to m
n=int(input("n: "))
m=int(input("m: "))
l=[]
sum=0
if n>m or n<0 or m<0:
    print("Enter Valid Range")
for j in range(n,m+1):
    for i in range(1,j):
        if(j%i==0):
            l.append(i)
    for i in l:
        sum=sum+i
    if sum==j:
        print(j)
    sum=0
    l=[]



