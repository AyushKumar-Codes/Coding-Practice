x=int(input())
print("ok" if type(x)==int else "not ok")

rows=[1,3,4,5,6]
cols=[6,7,8,9,0]
c = [[i for i in cols] for j in rows]
print(c)