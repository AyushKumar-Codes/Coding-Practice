class Student:
	def __init__(self, name, age, email):
		self.name = name
		self.age = age
		self.email = email
Stud_1 = Student('SriRam', 25, 'ram@sch.com') 
Stud_2 = Student('Lakshman', 28, 'laks@sch.com')
print('Stud_1 details =', Stud_1.name, Stud_1.age, Stud_1.email)
print('Stud_2 details =', Stud_2.name, Stud_2.age, Stud_2.email)