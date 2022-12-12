import re

# string with ASCII and Unicode characters
target_str = "虎太郎 and Jessa are friends"

# Without re.A or re.ASCII
# To match all 3-letter word
# result = re.findall(r"\b\w{3}\b", target_str)
# print(result)
# Output ['虎太郎', 'and', 'are']

# With re.A or re.ASCII
# regex to match only 3-letter ASCII word
result = re.findall(r"\b\w{3}\b", target_str, re.A)
print(result)
# Output ['and', 'are']

