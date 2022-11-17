def simplecalc(a,b):#if i use (*a,b) then only keyword arguments will valid
    print("addition:",a+b)
    print("substration:",a-b)
    print("multiplication",a*b)
simplecalc(a=3,b=5)#Keyword Arguments
simplecalc(b=5,a=6)#Keyword Arguments
simplecalc(4,6)#Positional Arguments