m=int(input("Enter your Weigth in Pounds: "))
h=int(input("Enter Your Height in inches: "))
m1=m*0.45359237
h2=h*0.0254
if (m1/h2<30 and m1/h2>=25):
    print("Overweight")
elif(m1/h2<18.5):
    print("UnderWeight")
elif(m1/h2<25 and m1/h2>=18.5):
    print("Normal")
else:
    print("Obese")
