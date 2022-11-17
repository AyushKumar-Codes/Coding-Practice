l1=[1,2,3,4]
l2=[x*x for x in l1]
print(l2)

l1=[3.4,6.2,33]
l2=[x*x*3.14 for x in l1]
print(l2)


l1=[1,2,3,4]
l2=[x*x for x in l1 if x%2==0]
print(l2)

f=["apple","orange","kiwi","mango"]
newlist=[x for x in f if "a" in x]
print(newlist)