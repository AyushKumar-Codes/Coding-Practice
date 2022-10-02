s=input("")
a=0
b=0
for i in s:
    if i=="(":
        a=a+1
    if i==")":
        b=a+1
if a==b:
    print("Valid Expression and depth:",a)
elif a>b:
    print("Not Valid Expression and Errors:",a-b)
else :
    print("Not Valid Expression and Errors:",b-a)