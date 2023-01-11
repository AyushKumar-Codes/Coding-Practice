import re

target_str = "KELLy is a Python developer at a PYnative. kelly loves ML and AI"

# Without using re.I
result = re.findall(r"kelly", target_str)
print(result)
# Output ['kelly']

# with re.I
result = re.findall(r"kelly", target_str, re.I)
print(result)
# Output ['KELLy', 'kelly']

# with re.IGNORECASE
result = re.findall(r"kelly", target_str, re.IGNORECASE)
print(result)
# Output ['KELLy', 'kelly']