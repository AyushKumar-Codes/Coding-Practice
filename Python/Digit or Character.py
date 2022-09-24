print("Enter 0 for exit")
a=(input())
if (a>="a")and (a<="z"):
    print("Its Character")
elif(a=="0"):
    exit()
elif(a>="A" and a<="Z"):
    print("Its a Character")
elif(a>="1" and a<="9"):
    print("Its a Number")
else:
    print("Its not Alphabet nor Number")
