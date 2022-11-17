str="Hello"
str1="Python"
print(str+str1+str1+str)

x=input()
y=input()
r=x[1:]+y[1:]
if len(r)<=0:
    print("null")
else:
    print(r)

x=input("")
print(x*4)
print(x[::-1]*3)

x=input("")
print(x[:3]*3)

x=input("")
n=int(input())
print(x*n)

x=input()
n=int(input())
t=len(x)
if n<0 or n>t:
    print("num should be positive,less than length of str")
else:
    print(x[:n]*n)

print("Book"*3+"School")

str1=input()
str2=input()
l1=len(str1)
l2=len(str2)
if l1==l2:
    print("strings are same length")
elif l1<l2:
    print(str1+str2+str1)
else:
    print(str2+str1+str2)