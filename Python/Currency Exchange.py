a=float(input("Enter the exchange rate from dollar to RMB: "))
b=int(input("Enter 0 to convert dollar to RMB and 1 vice versa: "))
if (b>1 or b<0):
    print("Enter valid input either 0 or 1")
elif(b==0):
    b=float(input("Enter the dollar amount: "))
    print("$"+str(b),"is {0:.2f}".format(b*a),"yuan")
elif(b==1):
    b = float(input("Enter the RMB amount: "))
    print(b,"yuan is","${0:.2f}".format(b/a))