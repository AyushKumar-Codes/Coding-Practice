import re
# #Replace all white-space characters with the digit "9":
txt = "The rain in Spain"
x = re.sub("\s", "9", txt)
print(x)

# #Replace the first two occurrences of a white-space character with the digit 9:
txt = "The rain in Spain"
x = re.sub("\s", "9", txt, 2)
print(x)