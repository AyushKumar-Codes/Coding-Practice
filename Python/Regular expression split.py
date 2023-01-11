import re
#Split the string at every white-space character:
# txt = "The rain in Spain"
# x = re.split("\s", txt)
# print(x)

#Split the string at the first white-space character:
txt = "The rain in Spain"
x = re.split("\s", txt, 1)#n+1 elements will be there in list
print(x)

