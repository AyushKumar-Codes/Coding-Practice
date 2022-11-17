s=input()
n=int(input())
f=len(s)
if f<n or n<0 :
    print("num should be positive,less than the length of str")
for i in range(f):
    if i==n:
        continue
    print(s[i],end="")

#Sir method
s=input()
nprint