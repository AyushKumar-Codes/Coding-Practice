#Dictionary Comprehension for making dictionary of square of numbers
d={i:i**2 for i in range(1,11)}
print(d)
# Dictionary Comph for using String Iterating
d={i:"Python" for i in input().split(",")}
print(d)
# Dictionary Comph for using List Iterating
l=[1,2,3,4,5,"S"]
d={i:j for i,j in enumerate(l)}
print(d)
l1=[1,2,34,5,4]
l2=[1,32,4,54,]
z=zip(l1,l2)
d={i:j for i,j in z}
print(d)
