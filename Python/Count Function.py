x=input()
y=input()
l=[]
d=0
n=0
t=len(x)
for i in range (t-1):
    for j in range (1+n,t+1):
        l.append(x[i:j])
    n=n+1
l.append(x[-1])
for b in l:
    if b==y:
        d=d+1
print(d)
