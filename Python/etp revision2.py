x=[int(i) for i in input().split(",")]
y=int(input())
if y < len(x) and y>-len(x):
    print(x[y])
else:
    print("list index out of range")
if sum(x)==0:
    print("division by zero")
print("Error Handled")