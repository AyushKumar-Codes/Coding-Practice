x=int(input("Enter Number: "))
p=1
i=1
if x<0:
    print("Enter valid Number -ve value is not valid")
if x==0:
    print("Factorial is 1")
else:
    while i <= x:
        p=p*i
        i=i+1
        print("Factorial is ",p)
