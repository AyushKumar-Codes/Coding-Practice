import re
mystring = input("string with email address: ")
m = re.findall('\S+@\S+', mystring)
if m != []:
	print("email address:", m)
else:
	print("No email address found")