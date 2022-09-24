x=int(input("Enter your Electric Units= "))
if (x<=100):
    y=x*1.5
    print("Your Electric Bill is ",y)
elif (x>100 and x<=200):
    r=str(x)
    t=r[-1]+r[-2]
    u=int(t)
    o=x-u
    i=o*1.5
    w=x-100
    r=w*2.5
    p=i+r
    print("Your Electric Bill is ",p)
elif(x>200 and x>100):
   r =str(x)
