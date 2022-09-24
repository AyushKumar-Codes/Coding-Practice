x=int(input("Enter 3 digit Number for Armstrong check= "))
s=str(x)
y=len(s)
z=int(s[0])**y+int(s[1])**y+int(s[2])**y # +int(s[3])**y+int(s[4])....n You can use this for n digits
if (x==z):
    print("True")
else:
    print("False")