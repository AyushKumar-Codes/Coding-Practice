a=10
b=20
str="Hello"
print("a= {} b= {} str= {}".format(a,b,str))
print("a= {2} b= {1} str= {0}".format(a,b,str)) # 0 = a, 1 = b, 2 = str
print("{0} {1:d}".format("students",18))
print("{:3d} {:d}".format(7,18))
print("{:03d} {:d}".format(7,18))
print("{:<03d} {:d}".format(7,18))
print("{:>03d} {:d}".format(7,18))
print("{:10s} is the string".format("abc"))# strings are always left alignment
print("{:>10s} is the string".format("abc"))
print("{0:.5s}".format("Everyone"))
print("{0:10.4s}".format("Everyone"))
print("{0:>10.4s}".format("Everyone"))
print(3.12424)
print("{0:6.2f}".format(3.14159))
# Q1. Print string "Teapot" with 3 whitespaces on the right.
print("{0:9s}".format("Teapot"))
# # Q2. Print 45 with 3 spaces on the left.
print("{0:5d}".format(45))
# # Q3. Print "Tea" using string "Teapot".
print("{0:.3s}".format("Teapot"))
# # Q4. Print 45.1245 upto two decimals.
print("{0:.2f}".format(45.1245))
print("{0:x}".format(15))
print("{0:X}".format(15))
print("{0:o}".format(15))
print("{0:b}".format(15))
print("{0:e}".format(1534566))
print("{0:E}".format(1234567))
print(format("Hello","10.2s"))
print(format("Hello",">10.2s"))
print(format("Hello","<10.2s"))
print(format(45,"4d"))
print(format(45,"<4d"))
print(format(123.5678,"7.2f"))