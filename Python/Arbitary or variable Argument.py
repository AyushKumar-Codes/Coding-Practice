def cal(*args):
    for i in args:#if we don't use loop then below positional arguments  will bring error in execution
        print(i)
cal(23,4,54,5,6)
print("------------")
cal(23,4,54,5,6)
print("------------")
cal(23,4,54,5,6)
print("------------")

#another method
def cal(*args):
    print(args)
cal(23,4,54,5,6)#we can display in the form of tu
print("------------")
cal(23,4,54,5,6)
print("------------")
cal(23,4,54,5,6)
print("------------")

#another method
def cal(**args):
    for i,j in args.items():
        print(i,j)
cal(a=23,b=4,c=54)
print("------------")
cal(a=23,b=4,c=54)
print("------------")
cal(a=23,b=4)
print("------------")
#Another Method
def cal(**args):
    for i in len(args):
        print(args[i])
cal(a=23,b=4,c=54)
print("------------")
cal(a=23,b=4,c=54)
print("------------")
cal(a=23,b=4)
print("------------")
