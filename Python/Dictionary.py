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
