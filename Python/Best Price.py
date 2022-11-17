x=int(input("Enter weight of package 1: "))
y=int(input("Enter Price of package 2: "))
w=int(input("Enter weight of package 2: "))
z=int(input("Enter Price of package 2: "))
if (x/y )> (w/z):
    print("Package 1 with Weight:",x,"Price:",y)
elif (x/y)<(w/z):
    print("Package 2 with Weight:",w,"Price:",y)

