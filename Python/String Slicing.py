print(" Python is not Typhoon")
print(" Abracadabra"*7)
x='''Hello Everyone
This is Python Class
and we are learning data type'''
print(x)
#String Slicing
s="Hello"
#no output will be there is start and end value is same eg 4:4\
print("Ayush"[2:2])
#String indexing
print(s[0])
print(s[1])
print(s[2])
print(s[3])
print(s[4])
print(s[-1])
print(s[-2])
print(s[-3])
print(s[-4])
print(s[-5])
print(s[0:3])
print(s[1:])
print(s[:-1])
print(s[-1:])#if we use str slicing on the last index then that index character will be printed
#For Integer Value
a=34344
print(str(a)[0])#As it is a string slicing so we have to convert it into String
print(str(a)[1])
print(str(a)[2])
print(str(a)[3])
print(str(a)[4])
print(str(a)[-1])
print(str(a)[-2])
print(str(a)[-3])
print(str(a)[-4])
print(str(a)[-5])
print(str(a)[0:3])
print(str(a)[1:])
print(str(a)[:-1])
print(str(a)[-1:])
x="Hello"
y="World"
print(x+y)
print(x[0:4:2])
print(x[0::2])
print(x[0::2])
print(x[2::2])
print(x[::-1])#Reverse order printing
print(x[-1:-4:-1])
print(x[0:4:-1])#it will give null string(Empty line# )
print(x[4:0:-1])
print(x[-1:])#It is not assumming to move from right to left(execption)
lang="python"
print()

str="String is how are you"
print((str[4:7]))
print((str[2:5]))
print((str[-4:-1]))
print((str[-2:-5:-1]))
print(str[-4:])

str=input("input: ")
if len(str)>2:
    print("output:",str[:2]+str[-2:])
else:
    print("output:",str)

str=input("")
print(str[1:-1])
str=input