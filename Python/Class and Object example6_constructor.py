class Student:
	def __init__(self, name, age, email):
		self.name = name
		self.age = age
		self.email = email

name = input("s1 name: ")
age = int(input("s1 age: "))

Stud_1 = Student(name, age, 'arya@gmail.com')

name = input("s2 name: ")
age = int(input("s2 age: "))

Stud_2 = Student(name, age,'geetha@gmail.com')

print('Stud_1.name:', Stud_1.name)
print('Stud_2.name:', Stud_2.name)