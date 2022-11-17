"""
Recursive is expensive in  terms of time and space
"""
# def recurfact(n):
#     if n==1 or n==0:
#         return 1
#     else:
#         return n*recurfact(n-1)
# num=int(input("num:"))
# if num<0:
#     print("Factorial not exit for negative number")
# else:
#     print("Factorial:",recurfact(num))


# Sum of n numbers

# def recurfact(n):
#     if n==1 or n==0:
#         return 1
#     else:
#         return n+recurfact(n-1)
# num=int(input("num:"))
# if num<0:
#     print("Enter a positive number")
# else:
#     print("Sum: ",recurfact(num))

def reverse(n,x):
    if (n==0):
    return x
x=(x*10)+(n%10)
return reverse(n//10,x);
num=int(input("x: "))
print(reverse(num,0))


