a="hello python"
print(a.startswith("h"))
a="hello python"
print(a.startswith("he"))
a="hello python"
print(a.endswith("n"))
a="hello python"
print(a.endswith("on"))
a="hello python"
print(a.find("n"))
a="hello python"
print(a.find("hel"))
a="hello python and welcome to python class"
print(a.find("py"))

#min is use to print the character which has least unicode
a="hello"
print(min(a))
print(max(a))

x=input()
if x.startswith("python") and x.endswith("programming"):
    print("Valid")
else:
    print("Invalid")
print("Character with min val:",min(x))#Space has the minimum unicode
print("Character with max val:",max(x))

x=input()
if x.startswith("python"):
    print("str is:",x)
else:
    print("str after adding 'pyhton':","Python "+x)

str=input()
length=len(str)
result=""
for s in range(0,length+1):
    result=result+str[:s]
print("incremental order:",result)