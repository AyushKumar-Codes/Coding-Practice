x=input("list1: ").split(",")
y=input("list2: ").split(",")
s=0
n=0
for i in x:
    if n>=len(y):
        break
    if i==y[n]:
        s=s+1
        n=n+1
    else:
        s=0
        n=0
if s==len(y):
    print("Exist")
else:
    print("not exits")