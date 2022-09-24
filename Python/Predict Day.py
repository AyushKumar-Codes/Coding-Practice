print("Enter Values for today's day accordingly :-\nFor, Sunday=0 , Monday=1 , Tuesday=2 , Wednesday=3 , Thrusday=4 , Friday=5 , Saturday=6")
x=int(input("Enter today's day: "))
y=int(input("Enter the number of days elapsed since today: "))
g=["Sunday","Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday"]
f=(x+y)%7
if(x>6 or x<0):
    print("Enter a Valid input in \"Today's Day\" ")
elif(f==0):
    print("Today is",g[x],"and the future day is Sunday")
elif(f==1):
    print("Today is",g[x],"and the future day is Monday")
elif (f == 2):
    print("Today is", g[x], "and the future day is Tuesday")
elif(f==3):
    print("Today is",g[x],"and the future day is Wednesday")
elif(f==4):
    print("Today is",g[x],"and the future day is Thrusday")
elif(f==5):
    print("Today is",g[x],"and the future day is Friday")
elif(f==6):
    print("Today is",g[x],"and the future day is Saturday")
