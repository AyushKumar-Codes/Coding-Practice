'''
IF function is use for making conditional statements
and for this we have to be concerned about indentation
after If or Else a TABSpace is required
TABspace = 4 spaces
'''
x=int(input("Enter a Number= "))
if(x>0):
    print("Number is positive")#Indentation is required else indentation error will occur
print("End of program")

x=int(input("Enter Your Age= "))
if(x>=18):
    print("You are eligible for Voting")
print("End of Program")

x=int(input("Enter a number: "))
if(x%7==0) :
    print("Given",x,"is Divisible by 7")
print("End of Program")
x=int(input(""))
if(x%2==0) :
    print("Given {} is Even".format(x))
print("End of Program")
x=int(input("Enter First Number"))
y=int(input("Enter First Number"))
if(x==y) :
    print("Given",x,"is Divisible by 7")
print("End of Program")

