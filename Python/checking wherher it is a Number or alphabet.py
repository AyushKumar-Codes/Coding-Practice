'''i=input("Enter: ")
x=ord(i)
if(x>=48 and x<=57): # 48 is for 0  and 57 is for 0
    print("Number")
elif(x>=65 and x<=90) or (x>=97 and x<=122): #65 is for A and 90 is for 90 , 97=a and 122= z
    print("Alphabet")
else:
    print("Neither number nor alphabet")'''
i=input("Enter: ")
if i.isnumeric():# x.isnumeric() is use to detect weither it is number or not
    print("Number")
elif i.isalpha(): # x.isalpha() is use to detect weither it is alphabet or not
    print("Alphabet")
else:
    print("Neither number nor alphabet")

