import re
mystring = "Hello!! Good Morning, Welcome to python tutorial class 24."
matches = re.findall('[eo]+', mystring)
for m in matches:
	print(m)