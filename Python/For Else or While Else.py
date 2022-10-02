x=int(input("Printing all numbers till: "))
i=0
while i<=x:
    print(i)
    i=i+1
else:
    print("Completed")
'''Else part is printed after the while loop completed but this can be done by
just removing print from while indent so main use is it in loop break then that
will also be not printed'''


#Print Even Number till n
x=int(input("n:"))
for i in range(1,x+1):
    for j in (2,2):# this(2,2) means j=2
        if i%j!=0:
            break
    else:
        print(i)

