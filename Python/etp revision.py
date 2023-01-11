x=int(input())
l=[]
for i in range(x):
    y=input()
    l.append(y)
print(l)
s=0
for i in l:
    if i.lower()==i.lower()[::-1]:
     s=s+1
print(s)