import re
target_str = "Joy lucky number is 75\nTom lucky number is 25"

# find 3-letter word at the start of each newline
# Without re.M or re.MULTILINE flag
result = re.findall(r"^\w{3}", target_str)
print(result)
# Output ['Joy']

# find 2-digit at the end of each newline
# Without re.M or re.MULTILINE flag
result = re.findall(r"\d{2}$", target_str)
print(result)
# Output ['25']

# With re.M or re.MULTILINE
# find 3-letter word at the start of each newline
result = re.findall(r"^\w{3}", target_str, re.MULTILINE)
print(result)
# Output ['Joy', 'Tom']

# With re.M
# find 2-digit number at the end of each newline
result = re.findall(r"\d{2}$", target_str, re.M)
print(result)
# Output ['75', '25']