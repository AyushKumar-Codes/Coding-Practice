a=int(input("Enter number n"))
x=1
se=0
so=0
while x<=a:
    if (x%2!=0):
        so=so+x
    else:
        se=se+x
    x=x+1
print("Sum of Odd numbers are",so)
print("Sum of Even numbers are",se)