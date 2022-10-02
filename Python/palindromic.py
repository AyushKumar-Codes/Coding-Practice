#Palindromic numbers are those which equal to when its digits are reversed
# a=int(input("Enter a number:"))
# i=str(a)
# p=len(i)
# y=""
# for x in range(1,p+1):
#     y=y+i[-x]
# print("Reverse is : ",y)
# if int(y)==a:
#     print("Palindromic")
# else:
#     print("Not Palindromic")

# wap to display all palindromic numbers from  n to m
n=int(input("n: "))
m=int(input("m: "))
r=""
if n>m or n<0 or m<0:
    print("Enter Valid Range")
for i in range (n,m+1):
    y= str(i)
    p=len(y)
    for x in range(1,p+1):
        r=r+y[-x]
    if int(r)==i:
        print(i)
    r=""

