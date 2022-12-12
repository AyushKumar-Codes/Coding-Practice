try:# Try block is use for checking a code wether an exception or logic error occur
    a=int(input())
    b=int(input())
    print(a/b)
except:# Except block is executed if Exception or logic error occurs
    print("Exception :- number is divided by 0")

#base Exception class is the root of all the exceptions