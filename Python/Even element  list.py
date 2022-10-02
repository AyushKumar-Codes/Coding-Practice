# wap to display all even list elements from the following list:
# list1=[[1,2,3],[4,5,6],[7,8,9]]
list1=[[1,2,3],[4,5,6],[7,8,9]]
for i in list1:
    for j in range(0,3):
        if i[j]%2==0:
            print(i[j])
