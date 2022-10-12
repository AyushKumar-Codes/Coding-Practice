x=int(input("Enter Number for Armstrong check= "))
s=str(x)
y=len(s)
p=0
i=0
for i in s:
    i = int(i) ** y
    p=p+i
if (x==p):
    print(x,"is a Armstrong number")
else:
    print(x,"is not a Armstrong number")

# num=int(input("Enter number: "))
# d=len(str(num))
# s=0
# t=n
# while temp>0:
#     di=t%10
#     s=s+di**d
#     temp//=10
# if n==s:
#     print(n,"is a Armstrong number")
# else:
#     print(n,"is not a Armstrong number")
