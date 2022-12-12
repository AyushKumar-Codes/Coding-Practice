#Dictionary is a unordered collection of keys and value
mydict=dict()
print(type(mydict))
print(mydict)
d1=dict(abc=10,pqr=30,stu=40)
print(d1)
#Dictionary contains keys which can not be change and value which can be changeable
#Dictionary Of Students and Their Roll No.
c=dict(Ayush=12212470 , sumit=12212460 ,Sanvitkar=12213460 , Aditya=12367839 , Ravi=21233289)
print(c)
c={"123":"A20","124":"A23d"}#This is another way to write dictionary
print(c)
s=dict(Shirt=150, jeans=1000 ,ToothBrush=25 ,Cap=23)
print(s)

d=dict(USA="Washington",India="New Delhi",Nepal="Katmandu")
print(d["India"])
print(d["USA"])
print(d["Nepal"])
print(d.get("India"))
print(d.get("Nepal"))
d['India']="Bihar"
print(d["India"])

#THis code is to change the key values of dictionary by user input
products={"Prod1":4500,"Prod2":5000,"Prod3":6000}
print(products)
np1=int(input("Enter new price of product1:"))
np2=int(input("Enter new price of product2:"))
np3=int(input("Enter new price if product3:"))
products["Prod1"]=np1
products["Prod2"]=np2
products["Prod3"]=np3
print("Prices are updated")
print(products)
#How to add elements in Dictionary
s=dict()
x=input("State: ")
y=input("Capital: ")
s.update({x:y})
print(sorted(s.items()))#sorted(s.items())) is use for printing keys in alphabetically order
#How to convert to list as Key Value pair in a Dictionary
x=input()
y=input()
l1=x.split(",")
l2=y.split(",")
d=zip(l1,l2)
print(dict(d))

#get method to print value
f={"one":1,"Two":2,"Three":3}
print(f.get("one"))
print(f.get("Four","Not available"))#if key is not available then second parameter message will be printed

#clear gives Empty dictionary
h=[1,2,4,6,7,8]
print(h.clear())
#Q Swaping Key to Value
x=input().split(",")
y=input().split(",")
f=zip(x,y)
d=zip(y,x)
print("before exchange:",list(f))
print("after exchange:",list(d))
#Q Counting no. of times element repeat in
d=input().split(",")
r=[]
t=[]
for i in d:
    if i not in r:
        r.append(i)
for i in sorted(r):
    t.append(d.count(i))
g=zip(sorted(r),t)
print(list(g))
#Update is similar to append of list
d={"a":1,"b":2,"c":3,"d":4}
d1={"e":5,"f":6,"g":7,"h":8}
d.update(d1)
d.update({1:2})
print(d)
#Updating dictionary with zip and .update method with adding 1 in values
l=[1,2,3,4]
l2=[1,2,3,4]
d=dict()
for i,j in zip(l,l2):
    d.update({i:j+1})
print(d)
#updating with comprehension
l=[1,2,3,4]
l2=[1,2,3,4]
d=dict()
for i,j in zip(l,l2):
    d.update({i:j+1} if i%2==0 else {i:j})
print(d)
