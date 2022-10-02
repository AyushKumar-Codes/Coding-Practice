l=["Red","Blue","Green","Orange"]
x=input("")
for v in l:
    if x==v:
        print("Sorry !!! Your entered color name is already exiting")
else:
    print("Thanks for gving us the new name")
    l.append(x)
print("Updated List is:",l)