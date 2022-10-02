print("Multiplication Table")
print("|",end="")
for j in range(1,11):
    print("",j,end="")
print()
print("-----------------------------------------------")
for i in range(1,11):
    print(i,"|",end="")
    for j in (1,11):
        print(format(i*j,"4d"),end="")
    print()