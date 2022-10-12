import math
#Number-theoretic and representation functions:
#floor() , fmod() , ceil() , fabs() , factorial() , gcd() , trunc()
import math
x=12.45
print(math.floor(x))

x,y=43.50,4.5
print(math.fmod(x,y))# This always work in case of fractional value
print(43.50%4.5)  # sometimes it will not work in fractional value

x=12.34
print(math.ceil(x))

x=-12
y=-12.34
print(math.fabs(x)) # output is in Float Values
print(math.fabs(y))

x=50
print(math.factorial(x))#Negative number gives ValueError

x,y=16,12
print(math.gcd(x,y))

x=89.76
print(math.trunc(x))# This gives the integer part of the a float

#power and logarithmic Functions:
#exp() , log() , log10 , pow() , sqrt ()
print(math.exp(2)) #e^2
print(math.log(3))
print(math.log10(5))
print(math.pow(2,3))
print(math.sqrt(16))

#Trignometric Function
#sin(x),cos(x),tan(x),hypot(x,y)
print(math.sin(math.radians(30))) #sin 30 degree:1/2
print(math.cos(math.radians(0))) #cos 0 degree: 1
print(math.tan(math.radians(45))) #tan 30 degree:1
print(math.hypot(4,2))
#Angular Conversion
print(math.radians(1)) # 0.017[Degree to radians]
print(math.degrees(1))# 57.295 [Radians to degrees]

#Mathmatical Constants
#pi,e,tau,inf
print(math.e)
print(math.tau)
print(math.pi)
print(math.inf)#inf means infinity
print(math.nan)#nan means not a number


