#Creating a file
# obj=open("demo.txt","w")

#Writing the File
# obj=open("demo.txt","w")
# obj.write("First attempt")
# obj.write("Second attempt")
# obj.close()

#Appending the File
# obj=open("demo.txt","a")
# obj.write("First attempt")
# obj.write("Second attempt")
# obj.close()

# Reading the file
# obj=open("demo.txt","r")
# print(obj.read())
# obj.close()

# Reading particular lines
obj=open("demo.txt","w")
obj.seek(3)#This will move the text cursor to after 3 starting from(0)
print(obj.read(4))# In .read parameter 4 is given so 4 letters will be read and printing
obj.close()
