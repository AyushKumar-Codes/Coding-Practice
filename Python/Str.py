st=input("")
if len(str)>1:
    print("output:",str[-1]+str[1:-1]+st[0])#indexing and concatinaton
else:
    if len(str)==1:
        print(str)
    else:
        print("null")
