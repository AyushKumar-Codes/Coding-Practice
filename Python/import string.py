import string
print(string.punctuation)
print(string.digits)
print(string.printable)
print(string.capwords("hello pyhton"))

import string
punc=string.punctuation
result=""
str="List - []\ntuple-()\nDictionary-{}\nComment-#\nMultiply-*\n not -!\n and -&\n or -|\n format specifier-%\n""$@;:'/+="
for i in str:
    if i not in punc:
        result=result+i
print("Set of punctuations in string.punctuation is:",punc)
print("String after removing all Punction's is:",result)
