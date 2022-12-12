import re
mystring = input("data: ")
match = re.search('(\w+),(\w+),(\w+),(\w+)', mystring)
if match == None:
	print("you have not entered 4 words")
else:
	print("full:", match.group(0))
	print("group 1:", match.group(1))
	print("group 2:", match.group(2))
	print("group 3:", match.group(3))
	print("group 4:", match.group(4))