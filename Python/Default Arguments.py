def cal(a=2,b=10):
    print("addition:",a+b)

cal(12)#default value of a is changed
cal(12,100)#default value is changed to a=12 and b=100
cal()# default value is a=2 and b=10

#Non default arguments cannot follow defaut arguments
# def cal(a=9,b):
#     print("addition:",a+b)
#
# cal(12)
# cal(12,100)
# cal()
