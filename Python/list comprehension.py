l1=[1,2,3,4]
l2=[x*x for x in l1]
print(l2)

l1=[3.4,6.2,33]
l2=[x*x*3.14 for x in l1]
print(l2)


l1=[1,2,3,4]
l2=[x*x for x in l1 if x%2==0]
print(l2)

f=["apple","orange","kiwi","mango"]
newlist=[x for x in f if "a" in x]
print(newlist)

list=[i for i in range(1,12)]
print(list)

#Adding odd number in a list
list=[i for i in range(1,11) if (not i%2==0)]
print(list)

#Checking a number wether it is odd or even
n=10
l=["even" if (n%2==0) else "odd"]
print(l)

#Adding each digits of strings:-
data=input()
l=[i for i in data]
print(l)

#Nested loop inside a list comprehension
l=[a*b for a in [1,2,3] for b in [10,20,30]]
print(l)

#Nested loop for adding common elements of two list inside other new list
l=[a for a in [10,8,5,4] for b in [4,7,5,10]  if a==b]
print(l)

# multiplication table of 7 except 7*7==42 adding in a list
l=[a*7 for a in range(1,11) if (not a*7==49)]
print(l)

#Adding elements in list in range(0,50) which are divisible by both 2 and 3
l=[a for a in range(0,51) if (a%2==0) and (a%3==0) ]
print(l)

# without list comprehension transpose of a matrix
l=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
g=[]
f=[]
n=0
while True:
    if n==4:
        break
    for i in l:
        g.append(i[n])
    f.append(g)
    g=[]
    n=n+1
print(f)
# With list comprehension transpose of a matrix
matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
transposed=[[row[i] for row in matrix] for i in range(len(matrix[0]))]
print(transposed)
# By list comprehension coverting string to integer
l1=[int(x) for x in input().split()]
print(l1)
