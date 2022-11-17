def fibb(n):
    if (n<=1):
        return n
    else:
        return (fibb((n-1)+fibb(n-2))
n=int(input("Enter the maximum limit to generate the fibonacci series:"))
print("The fibonacci series is:")
for i in range(0,n):
    print(fibb(i))