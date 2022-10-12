import random

x=int(input("Enter any luky Number in between 1 to 5= "))
b=random.randint(1,5)
print("Lucky Number Was",b)
if x==b:
    print("Congratulation You win")
else:
    print("You Lose")

#Sir's Code

import random

x=int(input("Enter any luky Number in between 1 to 5= "))
b=random.randint(1,5)
print("Lucky Number Was",b)
status=0
for i in range(1,101):
    if x==b:
        print("Congratulation You win")
        status=1
        break
if status==0:
    print("You Lose")

