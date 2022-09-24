print("Enter value of a,b,c accordingly :- \naX^2+bX+c")
a=int(input("\na: "))
b=int(input("b: "))
c=int(input("c: "))
d=(b**2-(4*a*c))
s1=(-b-d**(1/2))/(2*a)
s2=(-b+d**(1/2))/(2*a)
if(d==0):
    print("Root Does't Exit")
elif(d>0):
    print("The Real solutions are {} and {}".format(s1,s2))
elif(d<0):
    print("The Imaginary solutions are {} and {}".format(s1,s2))
