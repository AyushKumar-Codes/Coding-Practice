# #\A	Returns a match if the specified characters are at the beginning of the string
import re
# txt = "The rain in Spain"
# #Check if the string starts with "The":
# x = re.findall("\AHello", txt)
# print(x)
# if x:
#   print("Yes, there is a match!")
# else:
#   print("No match")
#
# # \b	Returns a match where the specified characters are at the beginning or at the end of a word
# txt = "The rain in Spain"
# #Check if "ain" is present at the beginning of a WORD:
# x = re.findall(r"\bra", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# txt = "The rain in Spain"
# #Check if "ain" is present at the end of a WORD:
# x = re.findall(r"ain\b", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\B	Returns a match where the specified characters are present, but NOT at the beginning (or at the end) of a word
# txt = "The rain in Spain"
# #Check if "ain" is present, but NOT at the beginning of a word:
# x = re.findall(r"\Bain", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# txt = "The rain in Spain"
# #Check if "ain" is present, but NOT at the end of a word:
# x = re.findall(r"ain\B", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\d	Returns a match where the string contains digits (numbers from 0-9)
# txt = "The rain in 24 Spain 56"
# #Check if the string contains any digits (numbers from 0-9):
# x = re.findall("\d", txt)
# # x = re.findall("\d{2}", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\D	Returns a match where the string DOES NOT contain digits
# txt = "The rain 24 in Spain 56"
# #Return a match at every no-digit character:
# x = re.findall("\D", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\s	Returns a match where the string contains a white space character
# txt = "The rain in Spain"
# #Return a match at every white-space character:
# x = re.findall("\s", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\S	Returns a match where the string DOES NOT contain a white space character
# txt = "The rain in Spain"
# #Return a match at every NON white-space character:
# x = re.findall("\S", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# # \w	Returns a match where the string contains any word characters
# # (characters from a to Z, digits from 0-9, and the underscore _ character)
# txt = "The rain in _Spain$"
# #Return a match at every word character (characters from a to Z, digits from 0-9, and the underscore _ character):
# x = re.findall("\w", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")

# #\W	Returns a match where the string DOES NOT contain any word characters
# txt = "The rain in Spain$"
# #Return a match at every NON word character (characters NOT between a and Z. Like "!", "?" white-space etc.):
# x = re.findall("\W", txt)
# print(x)
# if x:
#   print("Yes, there is at least one match!")
# else:
#   print("No match")
#
# #\Z	Returns a match if the specified characters are at the end of the string
# txt = "The rain in Spain"
# #Check if the string ends with "Spain":
# x = re.findall("ain\Z", txt)
# print(x)
# if x:
#   print("Yes, there is a match!")
# else:
#   print("No match")