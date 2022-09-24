x=int(input("Enter an integer: "))
a=0
b=0
c=0
if((x%5==0) and (x%6==0)):
    a=1
if((x%5==0) or (x%6==0)):
    b=1
if ((x % 5 == 0) or (x % 6 == 0)) and (x%30!=0):
    c=1
if a==1:
    print("IS",x,"Divisible by 5 and 6? True")
else:
    print("IS",x,"Divisible by 5 and 6? False")
if b==1:
    print("IS",x,"Divisible by 5 or 6? True")
else:
    print("IS", x, "Divisible by 5 or 6? False")
if c==1:
    print("IS",x,"Divisible by 5 or 6, but not both? True")
else:
    print("IS", x, "Divisible by 5 or 6, but not both? False")
