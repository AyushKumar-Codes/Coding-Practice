x=4
y=5.8
f="Hello"
h=complex(x,y)
print(type(x))
print(type(y))
print(type(f))
print(type(h))
print(h)
a=eval(input("Enter The Value to change data type: "))
b="b"
print(str(a))
print(chr(a))
print(int(a))
print(float(a))
print(hex(a))
print(oct(a))
print(bin(a))
print(ord(b))#This to print the Unicode
#binary to integer
s="0011"
val2=int(s,2)
print(val2)

#Hexadecimal to Integer
s="0xFF"
val1=int(s,16)#"s" and "16" are the parameterd where 16 is base which is not nessacary while s can be string,integer etc
print(val1)

#Octal to Integer
s="17"
val1=int(s,8)
print(val1)

s=float(input("Enter a String"))#This is not a valid code for a float Function
print(x)

#s=float(input("Inf"))
#print(s)
#print(ord("Asd")) ord function can take only 1 characters at a time
#print(hex(9.9))
a="str"
print(oct(3.4))