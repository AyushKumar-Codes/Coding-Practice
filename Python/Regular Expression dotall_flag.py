import re

# string with newline character
target_str = "ML\nand AI"

# Match any character
result = re.search(r".+", target_str)
print("Without using re.S flag:", result.group())
# Output 'ML'

# With re.S flag
result = re.search(r".+", target_str, re.S)
print("With re.S flag:", result.group())
# Output 'ML\nand AI'

# With re.DOTALL flag
result = re.search(r".+", target_str, re.DOTALL)
print("With re.DOTALL flag:", result.group())
# Output 'ML\nand AI'