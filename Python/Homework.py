
# 1.  Distance Convertor
ft = float(input("Enter distance in feet: "))
#Guys You can add many units as you want .
inches = ft * 12 #for inche
yards = ft / 3.0 #for yard
miles = ft / 5280.0 #for miles
cm = ft*30.48 #for centimeter

print("The distance in inches is: ",  inches)
print("The distance in yards is: ", yards)
print("The distance in miles is: ", miles)
print("The distance in cm is: ", cm)


#2  Energy Convertor
joule = float(input("Enter Energy in joule: "))
kj = joule/1000 # for kilojoule
gram_calorie = joule/4.184 #for gram calorie
k_c = joule/4184 #for kilocalorie
watt_hr = joule/3600 #for watt hour

print("The Energy in kj is: ", kj)
print("The Energy in gramcalorie is: ", gram_calorie)
print("The Energy in kilocalorie is: ", k_c)
print("The Energy in waathour is: ", watt_hr)
#3 Length Convertor

Km =float(input("Enter length in kilometer :"))
meter = Km*1000 #for meter
cm = Km*100000 #for centimeter
yard = Km*1094 #for yard
foot = Km*3281 # for foot

print("The Length in meter is:", meter )
print("The Length in centimeter is:", cm )
print("The Length in yard is:", yard )
print("The Length in foot is:", foot )


#4 Weight Convertor
kg = float(input("Enter Your Weight in kg: "))
gram = kg*1000 #for gram
t = kg/1000 # for tonne
pound = kg*2.205 # for pound
ounce = kg*35.274 #for ounce

print("The weight in gram is:", gram)
print("The weight in tonne is:", t)
print("The weight in pound is:", pound)
print("The weight in ounce is:", ounce)



#5To convert temperature
celsius = float(input("Enter Your Tempreature in celsius = "))
fahrenheit = (celsius * 1.8) + 32
kelvin = (celsius+273.15)

print("The temperature in fahrenheit is:", fahrenheit)
print("The temperature in Kelvin is:", kelvin)

#6 To calculate Area of any polygon
from math import tan, pi
number_sides = int(input("Input number of sides: "))
side_length = float(input("Input the length of a side: "))
p_area = number_sides * (side_length ** 2) / (4 * tan(pi / number_sides))
print("The area of the polygon is: ",p_area)