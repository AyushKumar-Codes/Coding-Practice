#This is base conversion to 5
x=int(input())
d=x
l=[]
r=0
a=""
while True:
    r=d%5
    d=d//5
    l.append(str(r))
    if d==0:
        break
print(a.join(l[::-1]))
