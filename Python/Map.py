def add(n):
    return n+n
num=(1,2,3,4)
result=map(add,num)
print(list(result))
print(result)

# Map and Lambda
num=(1,2,3,4)
result=map(lambda x:x+x,num)
print(list(result))

num1=[1,2,3]
num2=[4,5,6]
result=map(lambda x,y : x+y,num1,num2)
print(list(result))

num1=[1,2,3]
num2=[4,5,6]
num3=[3,4,5]
result=map(lambda x,y,z: x+y,num1,num2,num3)
print(list(result))

def fun(var):
    let=["a","e","i","o","u"]
    if var in let:
        return True
    else:
        return False

seq=["g","e","e","j","k","s","p","r"]
filtered=filter(fun,seq)
print("The filered letters are:")
for s in filtered:
    print(s)

seq=[0,1,2,3,4,4,56,6]
result = filter(lambda x:x%2!=0,seq)
print(list(result))
result=filter(lambda x:x%2==0,seq)
print(list(result))