import re
mystring = "Hello!! Good Morning, Welcome to python tutorial class 24.For any  queries please email to contactus@codetantra.com"
print(re.findall('^Hello', mystring))
print(re.findall('[0-9]+', mystring))
print(re.findall('[abc]+', mystring))