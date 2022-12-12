#[arn]	Returns a match where one of the specified characters (a, r, or n) is present
import re
# txt = "The rain in Spain"
# #Check if the string has any a, r, or n characters:
# x = re.findall("[arn]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

#[a-n]	Returns a match for any lower case character, alphabetically between a and n
# txt = "The rain in Spain"
# #Check if the string has any characters between a and n:
# x = re.findall("[a-n]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

# #[^arn]	Returns a match for any character EXCEPT a, r, and n
# txt = "The rain in Spain"
# #Check if the string has other characters than a, r, or n:
# x = re.findall("[^arn]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

#[0123]	Returns a match where any of the specified digits (0, 1, 2, or 3) are present
# txt = "The rain in Spain12"
# #Check if the string has any 0, 1, 2, or 3 digits:
# x = re.findall("[0123]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

# [0-9]	Returns a match for any digit between 0 and 9
# txt = "Before 12:30 PM"
# #Check if the string has any digits:
# x = re.findall("[0-9]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

#[0-5][0-9]	Returns a match for any two-digit numbers from 00 and 23
# txt = "Before 12:30 PM"
# #Check if the string has any two-digit numbers, from 00 to 23:
# x = re.findall("[0-2][0-3]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

#[a-zA-Z]	Returns a match for any character alphabetically between a and z, lower case OR upper case
# txt = "Before 12:30 PM"
# #Check if the string has any characters from a to z lower case, and A to Z upper case:
# x = re.findall("[a-zA-Z]", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

# [+]	In sets, +, *, ., |, (), $,{} has no special meaning, so [+] means:
# return a match for any + character in the string
# txt = "Before 12:30 PM . +"
# #Check if the string has any + characters:
# x = re.findall("[f.+e]", txt) # meta characters lose there special meaning and regix processor will look for meta character as a normal character
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
