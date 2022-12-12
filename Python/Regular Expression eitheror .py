import re
txt="The rain in Spain stays falls mainly in the plain!"
x=re.findall("falls|stays",txt)
print(x)
if x:
    print("Yes, there is at least one match!")
else:
    print("No match")
