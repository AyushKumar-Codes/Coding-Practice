import re

#The search() function returns a Match object:
# txt = "The rain in Spain"
# x = re.search("ai", txt)
# print(x)

#Search for an upper case "S" character in the beginning of a word, and print its position:
# txt = "The rain in Spain"
# x = re.search(r"\bS\w+", txt)
# print(x.span())

#The string property returns the search string:
# txt = "The rain in Spain"
# x = re.search(r"\bS\w+", txt)
# print(x.string)

#Search for an upper case "S" character in the beginning of a word, and print the word:
# txt = "The rain in Spain"
# x = re.search(r"\bS\w+", txt)
# print(x.group())

# txt = "The rain in Spain"
# x = re.search("\s", txt)
# print("The first white-space character is located in position:", x.start())

# txt = "The rain in Spain"
# x = re.search(r"\bS\w+", txt)
# print(x.end())





