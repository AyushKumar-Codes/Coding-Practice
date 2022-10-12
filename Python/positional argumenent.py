def student(name,roll_no,fees):
    print(name,roll_no,fees)
n=input("Enter Name: ")
r=int(input("Enter roll number: "))
f=float(input("Enter Fees: "))
student(roll_no=r,name=n,fees=f)

l1=["Rahul","Vivek","Suresh","kamal"]
def guest(x):
    print("Hello",x)
for i in l1:
    guest(i)

#How to restrict the Positional Argument
def person(na,aa):
    print(na,aa)
n=input(("Enter name: "))
a=int(input("Enter age: "))
person(n,a)
person(age=a,name=n)