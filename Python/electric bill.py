units=int(input("please enter the number of units you consumed in a month= "))
if(units<=100):
    payAmount=units*1.5
    fixedcharge=25.00
elif(units<=200):
    payAmount=(100*1.5)+(units-100)*2.5
    fixedcharge=50.00
elif(units<=300):
    payAmount=(100*1.5)+(200-100)*2.5+(units-200)*4
    fixedcharge=75.00
elif(units<=350):
    payAmount=(100*1.5)+(200-100)*2.5+(300-200)*4+(units-300)*5
    fixedcharge=100.00
else:
    payAmount=0
    fixedcharge=1500.00
Total=payAmount+fixedcharge;
print("\nElecticity bill=%.2f" %Total)