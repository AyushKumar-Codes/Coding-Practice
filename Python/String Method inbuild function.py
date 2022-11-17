x=input()
print(x.capitalize())# First letter will be capitalized
print(x.lower())# all letters will be lower case
print(x.upper())#all letters will be upper case
print(x.title())#all the first letter of all word will be Upper case
print(x.swapcase())#upper case will be changed to lower case and lower would be change to upper case
print(x.split())#convert the string into list all element will be the words of string , By default split work with space
print(x.split("@"))#In this Spliting  work with @
# print(x.center(10,"&")#In this String will be displayed in centered with rest of the space will be displayed with the help of "&" or other which is inside the ""
a="Happy married life Happy birthday birthday baby"
print(a.count("Happy"))
a="Java is Programming language"
print(a.replace("Java","Python"))
a="Java is Programming language and Java is Simple"
print(a.replace("Java","Python"))
a="@"
l=["www","codetantra","com"]
print(a.join(l))

#Class Question
x="Strings are immujtable"
# all letters will be lower case
print(x.upper())#all letters will be upper case
print(x.title())#all the first letter of all word will be Upper case
#upper case will be changed to lower case and lower would be change to upper case
print(x.split())#convert the string into list all element
print(x.center(25,"%"))
print(x.lower())
str2="@"
print(str2.join(x))
print(x.replace("strings","tuple"))

a="Hello"
print(a.isupper())

a="ABF"
print(a.isupper())

a="hasjfh"
print(a.islower())

a="Ademnf"

print(a.isalpha())

a="asdf24"
print(a.isalpha())

a="124234"
print(a.isnumeric())

a="Adasf2536"
print(a.isalnum())

a="536"
print(a.isalnum())

a="Adasf"
print(a.isalnum())

a="123"
print(a.isdigit())

a="asf134"
print(a.isdigit())

a="asdasf asrf"
print(a.isspace())

a="     "
print(a.isspace())

a="Hello Python"
print(a.istitle())

a="Hello Python"
print(a.istitle())

a="pello python"
print(a.istitle())