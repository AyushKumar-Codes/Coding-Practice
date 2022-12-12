#find
import re
txt="hello helo planet"
x=re.findall("he.*o",txt)
print(x)
#find .+
import re
txt="hello helo planet"
x=re.findall("he.*o",txt)
print(x)

import re
txt="hello planet"
x=re.findall("^hello.*planet$",txt)
if x:
    print("Yes")
else:
    print("no")
#
import re
txt="hello planet hevvo"
x=re.findall("he.{2}o",txt)
print(x)