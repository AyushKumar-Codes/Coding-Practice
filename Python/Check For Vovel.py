#String contain  vovel letter or not
x=input("vowel or 0 for EXIT: ")
a=0
b=0
c=0
while True:
    if x=="0":
        break
    for i in x:
        if i=="a" or i=="e" or i=="i" or i=="o" or i=="u" or i=="A" or i=="I" or i=="O" or i=="U" or i=="E":
            a=1
        if i.isnumeric() and i!="9":
            b=1
        else:
            c=1
    if b==1 and:
        print("Wrong Input")
    if c==1 and a==0 and b==0:
        print("String Does not contains Vovel")
    if a==1 and b==0:
        print("String contains Vovel")
    x = input("vowel or 0 for EXIT: ")
