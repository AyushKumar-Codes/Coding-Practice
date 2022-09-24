x=int(input())
y=int(input())
z=int(input())
if (x==y and y==z and x==z):
    print("All number are equal,So none is gretest")
elif (x>=y and x>=z):
    print("Greatest number is ",x)
elif (y>=x and y>=z):
    print("Greatest number is ",y)
else:
    print("Greatest number is ",z)