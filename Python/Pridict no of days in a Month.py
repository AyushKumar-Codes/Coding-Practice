y=int(input("Enter The Year: "))
m=int(input("Enter The Months: "))
a,b,c,d=30,31,28,29
if(m>12 or m<0):
    print("Enter Valid Input in \"Month\"")
elif(y%4==0 and y%100!=0 and m==2):
    print(d,"Days")
elif(y%400==0 and m==2):
    print(d,"Days")
elif(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12):
    print(b,"Days")
elif(m==2):
    print(c,"Days")
else:
    print(a,"Days")

