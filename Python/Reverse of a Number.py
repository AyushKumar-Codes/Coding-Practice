# n=int(input("Enter a number:"))
# rev=0
# rem=0
# while n>0:
#     rem=n%10
#     rev=rev*10+rem
#     n=n//10
# print("Reverse of the no. is :",rev)

# wap to display reverse of all even numbers from n to m

n=int(input("n: "))
m=int(input("m: "))
r=""
if n>m or n<0 or m<0:
    print("Enter Valid Range")
for i in range (n,m+1):
    if i%2==0:
        y= str(i)
        p=len(y)
        for x in range(1,p+1):
            r=r+y[-x]
        print(r)
    r=""
