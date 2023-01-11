import re

target_str = "Jessa is a Python developer, and her salary is 8000"

# re.X to add indentation  and comment in regex
result = re.search(r"""(^\w{5}) # match 5-letter word at the start
                        .+(\d{4}$) # match 4-digit number at the end """, target_str, re.X)
# Fiver-letter word
print(result.group(1))
# Output 'Jessa'

# 4-digit number
print(result.group(2))
# Output 8000